/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class AXMImageCaptionModel;

@interface AXMCaptionDetectorNode : AXMEvaluationNode

{
    AXMImageCaptionModel *_captionImpl;
}

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)evaluate:(id)arg1;
- (_Bool)requiresVisionFramework;

@end
