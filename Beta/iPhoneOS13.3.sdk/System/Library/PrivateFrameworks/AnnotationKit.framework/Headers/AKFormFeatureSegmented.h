/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKFormFeature.h>

@class AKFormFeatureLine, NSArray;

@interface AKFormFeatureSegmented : AKFormFeature

{
    AKFormFeatureLine *_baseline;
    NSArray *_characterSegmentRects;
    struct CGRect _enclosingRegionRect;
}

@property (retain, nonatomic) AKFormFeatureLine *baseline;
@property (nonatomic) struct CGRect enclosingRegionRect;
@property (retain, nonatomic) NSArray *characterSegmentRects;

+ (id)segments:(id)arg1 withEnclosingRect:(struct CGRect)arg2 baseline:(id)arg3 onPage:(id)arg4;

- (id)initWithCharacterSegments:(id)arg1 enclosingRect:(struct CGRect)arg2 baseline:(id)arg3 onPage:(id)arg4;

@end
