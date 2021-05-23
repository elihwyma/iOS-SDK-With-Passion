/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer;

__attribute__((visibility("hidden")))
@interface VSPersistentContainer : NSObject

{
    long long _modelVersion;
    NSManagedObjectContext *_viewContext;
    NSPersistentContainer *_persistentContainer;
}

@property (retain, nonatomic) NSManagedObjectContext *viewContext;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (nonatomic, readonly) long long modelVersion;

+ (id)directoryURL;
+ (id)legacyDirectoryURL;

- (id)init;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)migrateContainerIfNecessary;
- (id)initWithModelVersion:(long long)arg1;
- (id)insertDeveloperIdentityProviderInContext:(id)arg1;
- (id)developerIdentityProviderFetchRequest;

@end
