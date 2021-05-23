/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKFormFeature.h>

@class AKFormFeatureLine;

@interface AKFormFeatureBox : AKFormFeature

{
    _Bool _widthExpands;
    _Bool _multiline;
    unsigned long long _flags;
    unsigned long long _alignment;
    AKFormFeatureLine *_baseline;
    struct CGRect _enclosingRegionRect;
}

@property (nonatomic) unsigned long long flags;
@property (nonatomic) _Bool widthExpands;
@property (nonatomic, getter=isMultiline) _Bool multiline;
@property (nonatomic) unsigned long long alignment;
@property (retain, nonatomic) AKFormFeatureLine *baseline;
@property (nonatomic) struct CGRect enclosingRegionRect;

+ (id)boxWithRect:(struct CGRect)arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4;

- (id)initWithRect:(struct CGRect)arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4;

@end
