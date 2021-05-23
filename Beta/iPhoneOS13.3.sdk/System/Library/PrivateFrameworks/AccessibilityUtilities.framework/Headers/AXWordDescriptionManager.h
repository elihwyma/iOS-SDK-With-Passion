/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface AXWordDescriptionManager : NSObject

{
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSString *languageDialectCode;
}

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, readonly) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSString *languageDialectCode;

+ (id)sharedInstance;

- (id)languageCode;
- (id)descriptionForWord:(id)arg1;

@end
