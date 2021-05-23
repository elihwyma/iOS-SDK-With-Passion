/*
 Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface CKSharedDatabase : NSObject

{
    NSManagedObjectContext *_mainManagedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

@property (retain, nonatomic) NSManagedObjectContext *mainManagedObjectContext;
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)databaseURL;

- (id)newManagedObjectContext;
- (id)urlForDataModel;

@end
