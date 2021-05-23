/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, NSMutableDictionary, NSOperationQueue, NSString;

@protocol HFCameraClipVideoAssetContextProviderDelegate;

@interface HFCameraClipVideoAssetContextProvider : NSObject

{
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_videoContextFuturesByClipID;
    HMFUnfairLock *_lock;
    id <HFCameraClipVideoAssetContextProviderDelegate> _delegate;
}

@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) NSMutableDictionary *videoContextFuturesByClipID;
@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (weak, nonatomic, readonly) id <HFCameraClipVideoAssetContextProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultProvider;

- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)fetchVideoAssetContextForClip:(id)arg1 clipManager:(id)arg2;
- (id)cachedVideoAssetContextForClip:(id)arg1 clipManager:(id)arg2;
- (id)newFetchVideoAssetContextOperationForClip:(id)arg1 clipManager:(id)arg2;

@end
