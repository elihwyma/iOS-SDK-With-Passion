/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWDeferredContainerBase.h>

@class NSObject;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface BWDeferredCaptureContainer : BWDeferredContainerBase

{
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSObject<OS_dispatch_group> *_flushGroup;
    _Bool _flushBuffersUponCommit;
    _Bool _foldersCreated;
    _Bool _committed;
    _Bool _preflushed;
    _Bool _cached;
    unsigned long long _cacheExpiryTime;
    long long _commitDurationNS;
    long long _flushDurationNS;
}

@property (nonatomic, readonly) _Bool committed;
@property (nonatomic) _Bool cached;
@property (nonatomic) unsigned long long cacheExpiryTime;
@property (nonatomic, readonly) long long commitDurationNS;
@property (nonatomic, readonly) long long flushDurationNS;

+ (id)captureRequestIdentifierForManifest:(id)arg1;
+ (id)timeForManifest:(id)arg1 index:(unsigned long long)arg2;

- (void)dealloc;
- (int)abort;
- (int)commit;
- (int)flush;
- (int)commitPhotoDescriptor:(id)arg1;
- (int)commitDictionary:(id)arg1 tag:(id)arg2;
- (int)commitBuffer:(struct __CVBuffer *)arg1 tag:(id)arg2 bufferType:(unsigned long long)arg3 compressionProfile:(int)arg4 metadataTag:(id)arg5 portType:(id)arg6;
- (int)commitMetadata:(id)arg1 tag:(id)arg2 bufferTag:(id)arg3;
- (int)commitArray:(id)arg1 tag:(id)arg2;
- (int)commitCaptureSettings:(id)arg1 settings:(id)arg2;
- (int)_addEntryToXPCDictionary:(id)arg1 dictionary:(id)arg2;
- (int)_createFolders;
- (id)initWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolder:(id)arg3 flushBuffersUponCommit:(_Bool)arg4 err:(int *)arg5;
- (id)copyXPCEncoding:(int *)arg1;
- (int)preflush;
- (int)waitForFlush;

@end
