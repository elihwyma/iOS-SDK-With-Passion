/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNGenerateAttentionBasedSaliencyImageRequest;

@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode

{
    VNGenerateAttentionBasedSaliencyImageRequest *__imageSaliencyRequest;
}

@property (retain, nonatomic) VNGenerateAttentionBasedSaliencyImageRequest *_imageSaliencyRequest;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)arg1;
- (_Bool)requiresVisionFramework;

@end
