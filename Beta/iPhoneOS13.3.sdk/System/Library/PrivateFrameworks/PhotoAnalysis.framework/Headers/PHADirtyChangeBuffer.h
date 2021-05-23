/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PHADirtyChangeBuffer : NSObject

{
    NSMutableDictionary *_workInfosByWorkerType;
}

@property (retain, nonatomic) NSMutableDictionary *workInfosByWorkerType;

- (id)init;
- (id)snapshot;
- (void)recordChangeForAssetIdentifier:(id)arg1 workerType:(int)arg2 workerFlags:(int)arg3;

@end
