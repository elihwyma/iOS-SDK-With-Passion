/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class AVAssetReader, HMICameraVideoFragment, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HMICameraVideoAssetReader : HMFObject

{
    NSString *_logIdentifier;
    HMICameraVideoFragment *_videoFragment;
    unsigned long long _currentFrameId;
    NSObject<OS_dispatch_queue> *_workQueue;
    AVAssetReader *_assetReader;
    NSObject<OS_dispatch_queue> *_resourceLoaderWorkQueue;
}

@property unsigned long long currentFrameId;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) AVAssetReader *assetReader;
@property (readonly) NSObject<OS_dispatch_queue> *resourceLoaderWorkQueue;
@property (readonly) HMICameraVideoFragment *videoFragment;
@property (readonly) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;
+ (id)readerForVideoFragment:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3;
+ (id)assetKeys;
+ (id)trackKeys;

- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)startReading:(CDUnknownBlockType)arg1;
- (_Bool)readNextFrame:(id *)arg1 error:(id *)arg2;
- (id)initWithVideoFragment:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3;
- (void)_propertiesLoadedForAsset:(id)arg1 resultCallback:(CDUnknownBlockType)arg2;
- (id)_didKeyValueLoadFailed:(long long)arg1;
- (void)_propertiesLoadedForTrack:(id)arg1 fromAsset:(id)arg2 resultCallback:(CDUnknownBlockType)arg3;
- (_Bool)_validateSequentialIntegrityOfFragmentsInAsset:(id)arg1;
- (unsigned long long)_sequenceNumberOfLastFragmentInAsset:(id)arg1;
- (unsigned long long)_sequenceNumberOfFirstFragmentInAsset:(id)arg1;

@end
