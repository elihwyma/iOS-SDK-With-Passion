/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNClassifyImageAestheticsRequest;

@interface AXMImageAestheticsNode : AXMEvaluationNode

{
    VNClassifyImageAestheticsRequest *__imageAestheticsRequest;
}

@property (retain, nonatomic) VNClassifyImageAestheticsRequest *_imageAestheticsRequest;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)arg1;

@end
