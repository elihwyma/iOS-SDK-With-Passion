/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@class ASVHitTestResult, ASVRealHitTestResult;

@interface ASVHitTestDecision : NSObject

{
    ASVRealHitTestResult *_originalResult;
    ASVHitTestResult *_interpolatedResult;
    ASVHitTestResult *_finalResult;
    ASVHitTestResult *_interpolatedOrFinalResult;
}

@property (retain, nonatomic) ASVRealHitTestResult *originalResult;
@property (retain, nonatomic) ASVHitTestResult *interpolatedResult;
@property (retain, nonatomic) ASVHitTestResult *finalResult;
@property (retain, nonatomic) ASVHitTestResult *interpolatedOrFinalResult;

- (id)initWithOriginalResult:(id)arg1 interpolatedResult:(id)arg2 finalResult:(id)arg3;

@end
