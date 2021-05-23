/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@protocol OS_dispatch_queue;

@interface ISVideoAnalyzer : NSObject

{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *_operationsByRequestID;
    long long __currentRequestID;
}

@property (nonatomic, setter=_setCurrentRequestID:) long long _currentRequestID;

+ (id)defaultAnalyzer;

- (id)init;
- (long long)requestFrameTimesAroundTime:(CDStruct_1b6d18a9)arg1 inAsset:(id)arg2 trackID:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleAllFrameTimesRequestFinishedForTime:(CDStruct_1b6d18a9)arg1 frameTimes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)requestAllFrameTimesInAsset:(id)arg1 trackID:(int)arg2 completion:(CDUnknownBlockType)arg3;

@end
