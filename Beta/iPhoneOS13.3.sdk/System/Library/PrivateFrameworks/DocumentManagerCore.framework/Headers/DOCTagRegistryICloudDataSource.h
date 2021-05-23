/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@class NSUbiquitousKeyValueStore;

@protocol DOCTagRegistryDelegate, OS_dispatch_queue;

@interface DOCTagRegistryICloudDataSource : NSObject

{
    NSUbiquitousKeyValueStore *_store;
    NSObject *_iCloudToken;
    NSObject<OS_dispatch_queue> *_workingQueue;
    id <DOCTagRegistryDelegate> _delegate;
}

@property (retain, nonatomic) NSUbiquitousKeyValueStore *store;
@property (retain, nonatomic) NSObject *iCloudToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workingQueue;
@property (weak, nonatomic) id <DOCTagRegistryDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)writeTagsToCloud;
- (void)isICloudAvailableWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)syncTagsWithCloud:(_Bool)arg1 isICloudAvailable:(_Bool)arg2;
- (void)iCloudTokenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)kvsStoreDidChange:(id)arg1;
- (void)ubiquityIdentityDidChange;
- (void)syncTagsWithCloud:(_Bool)arg1;
- (id)iCloudTagsDictionary;
- (void)readTagsFromCloud:(_Bool)arg1;
- (long long)iCloudTagVersion;
- (long long)iCloudTagSerialNumber;
- (id)iCloudTags;

@end
