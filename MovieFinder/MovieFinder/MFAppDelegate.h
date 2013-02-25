//
//  MFAppDelegate.h
//  MovieFinder
//
//  Created by Jean-Baptiste Rieu on 25/02/13.
//  Copyright (c) 2013 Jean-Baptiste Rieu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MFAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
