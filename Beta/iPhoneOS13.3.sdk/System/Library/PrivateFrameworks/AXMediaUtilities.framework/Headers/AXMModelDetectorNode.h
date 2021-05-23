/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class NSString, NSURL, VNCoreMLModel;

@interface AXMModelDetectorNode : AXMEvaluationNode

{
    VNCoreMLModel *_model;
    NSURL *_modelURL;
}

@property (retain, nonatomic) NSURL *modelURL;
@property (nonatomic, readonly) NSString *modelIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (void)evaluate:(id)arg1;
- (_Bool)requiresVisionFramework;
- (_Bool)_loadModel:(id *)arg1;
- (_Bool)preloadModelIfNeeded:(id *)arg1;

@end
