/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDParallelTimeNodeBuildInfo : NSObject

{
    PDAnimationTarget *mTarget;
    double mDelay;
    double mDuration;
    int mIterateType;
    id mValue;
}

@property (retain) PDAnimationTarget *target;
@property double delay;
@property double duration;
@property int iterateType;
@property (retain) id value;

@end
