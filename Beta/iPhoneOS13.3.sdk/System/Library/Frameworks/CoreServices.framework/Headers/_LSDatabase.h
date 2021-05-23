/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class FSNode, NSDate, NSMutableSet, NSString, NSUUID;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSDatabase : NSObject

{
    FSNode *node;
    unsigned int uid;
    NSObject<OS_dispatch_queue> *accessQueue;
    _Bool needsUpdate;
    _Bool isForcedForXCTesting;
    NSMutableSet *changedBundleIDs;
    NSMutableSet *changedTypeIDs;
    struct __CSStore *store;
    struct LSSchema schema;
}

@property (nonatomic, readonly) NSDate *dateInitialized;
@property (nonatomic, readonly) FSNode *node;
@property (nonatomic, readonly) unsigned int userID;
@property (nonatomic, readonly) struct __CSStore *store;
@property (nonatomic, readonly) struct LSSchema *schema;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSUUID *cacheGUID;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, getter=isSeeded) _Bool seeded;
@property (nonatomic, getter=isSeedingComplete) _Bool seedingComplete;
@property (nonatomic, readonly) NSString *seededSystemVersion;
@property (nonatomic, readonly) NSString *seededModelCode;
@property (nonatomic, getter=arePrefsLoaded) _Bool prefsLoaded;
@property (nonatomic) _Bool applicationsChanged;
@property (nonatomic) _Bool documentTypesChanged;
@property (nonatomic) _Bool URLTypesChanged;
@property (nonatomic) _Bool typeDeclarationsChanged;

+ (void)setSeedingInProgress:(_Bool)arg1;
+ (id)headerTableName;
+ (unsigned int)sessionStatus;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)_init;
- (void)applicationDidChange:(unsigned int)arg1;
- (void)claimDidChange:(unsigned int)arg1;
- (void)registerCanonicalNamesFromStringLocalizer:(id)arg1;
- (void)registerCanonicalNames;

@end
