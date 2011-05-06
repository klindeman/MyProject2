//
//  MyProjectAppDelegate.h
//  MyProject
//
//  Created by Kevin Lindeman on 5/6/11.
//  Copyright 2011 Apple Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MyProjectAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
    NSPersistentStoreCoordinator *__persistentStoreCoordinator;
    NSManagedObjectModel *__managedObjectModel;
    NSManagedObjectContext *__managedObjectContext;
    NSImageView *_imageView;
}

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSImageView *imageView;

@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;
- (IBAction)awesomeAction:(id)sender;

@end
