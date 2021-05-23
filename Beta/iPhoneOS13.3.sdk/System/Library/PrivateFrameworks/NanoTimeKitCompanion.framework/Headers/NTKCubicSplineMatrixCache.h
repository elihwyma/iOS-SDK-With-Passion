/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface NTKCubicSplineMatrixCache : NSObject

{
    NSMutableDictionary *_openMatrixCache;
    NSMutableDictionary *_closedMatrixCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)sharedInstance;

- (id)init;
- (CDStruct_9edbfaa9 *)splineMatrixWithDimension:(int)arg1 cache:(id)arg2 matrixGenerator:(CDUnknownBlockType)arg3;
- (CDStruct_9edbfaa9 *)openSplineMatrixWithDimension:(int)arg1;
- (CDStruct_9edbfaa9 *)closedSplineMatrixWithDimension:(int)arg1;

@end
