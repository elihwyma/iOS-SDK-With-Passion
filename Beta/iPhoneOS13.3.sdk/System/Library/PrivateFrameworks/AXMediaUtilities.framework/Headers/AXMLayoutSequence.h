/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMLayoutItem.h>

@class AXMVisionFeature;

__attribute__((visibility("hidden")))
@interface AXMLayoutSequence : AXMLayoutItem

{
    AXMVisionFeature *_feature;
}

+ (id)sequence:(id)arg1;

- (struct CGRect)frame;
- (id)feature;
- (struct CGRect)normalizedFrame;

@end
