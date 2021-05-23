/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@protocol OS_dispatch_queue;

@interface ISPlayerItemChef : NSObject

{
    NSOperationQueue *__operationQueue;
    NSObject<OS_dispatch_queue> *__isolationQueue;
    NSMutableDictionary *__operationsByRequestID;
    long long __currentRequestID;
}

@property (nonatomic, readonly) NSOperationQueue *_operationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_isolationQueue;
@property (nonatomic, readonly) NSMutableDictionary *_operationsByRequestID;
@property (nonatomic, setter=_setCurrentRequestID:) long long _currentRequestID;

+ (id)defaultChef;

- (id)init;
- (long long)prepareIrisVideoWithAsset:(id)arg1 photoTime:(CDStruct_1b6d18a9)arg2 trimmedTimeRange:(CDStruct_e83c9415)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)prepareIrisPlayerItemWithAsset:(id)arg1 trimmedTimeRange:(CDStruct_e83c9415)arg2 photoTime:(CDStruct_1b6d18a9)arg3 includeVideo:(_Bool)arg4 includeAudio:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cancelPreparationOfIrisAssetWithRequestID:(long long)arg1;

@end
