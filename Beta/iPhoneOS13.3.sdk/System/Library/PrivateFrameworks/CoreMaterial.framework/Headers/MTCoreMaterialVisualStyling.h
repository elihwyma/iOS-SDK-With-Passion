/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <Foundation/NSObject.h>

@class CAFilter, NSDictionary, NSString;

@protocol MTVisualStyleSetProviding;

@interface MTCoreMaterialVisualStyling : NSObject

{
    id <MTVisualStyleSetProviding> _visualStyleSet;
    NSString *_visualStyleName;
    CAFilter *_composedFilter;
    NSDictionary *_tintColorDescription;
    struct CGColor *_tintColor;
    double _tintAlpha;
    NSString *_compositingFilter;
    NSString *_filterType;
    NSDictionary *_filterProperties;
}

@property (nonatomic, readonly) NSString *visualStyleSetName;
@property (nonatomic, readonly) NSString *visualStyleName;
@property (nonatomic, readonly, getter=_composedFilter) CAFilter *composedFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *tintColorDescription;
@property (nonatomic, readonly) struct CGColor *tintColor;
@property (nonatomic, readonly) double tintAlpha;

- (void)dealloc;
- (id)filterType;
- (id)compositingFilter;
- (void)_processTintingDescription:(id)arg1;
- (void)_processBlendingDescription:(id)arg1;
- (void)_processFilteringDescription:(id)arg1;
- (id)initWithVisualStyleSet:(id)arg1 styleName:(id)arg2 description:(id)arg3 andDescendantDescriptions:(id)arg4;
- (id)filterProperties;
- (void)_applyToLayer:(id)arg1 withColorBlock:(CDUnknownBlockType)arg2;
- (void)_getCompositingFilter:(id *)arg1 tintColor:(struct CGColor **)arg2;
- (void)_getFilterType:(id *)arg1 vibrantColor:(struct CGColor **)arg2 tintColor:(struct CGColor **)arg3 inputReversed:(_Bool *)arg4;

@end
