/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class NSURL, iconclassification__generated__;

@interface AXMIconClassDetectorNode : AXMEvaluationNode

{
    iconclassification__generated__ *_mlModel;
    NSURL *_modelURL;
}

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)evaluate:(id)arg1;
- (void)_downloadAssetIfNecessary;
- (id)_localizedClassForClass:(id)arg1;

@end
