/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNSceneClassificationRequest;

@interface AXMSceneDetectorNode : AXMEvaluationNode

{
    unsigned int _taxonomyOptions;
    VNSceneClassificationRequest *__sceneClassificationRequest;
}

@property (retain, nonatomic, setter=_setSceneClassificationRequest:) VNSceneClassificationRequest *_sceneClassificationRequest;
@property (nonatomic) unsigned int taxonomyOptions;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;
+ (id)possibleSceneClassifications;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)arg1;

@end
