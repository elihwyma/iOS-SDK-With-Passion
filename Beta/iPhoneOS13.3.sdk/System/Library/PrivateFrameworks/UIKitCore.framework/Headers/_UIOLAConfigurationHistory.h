/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UILAConfigurationHistory.h>

@class NSMapTable, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIOLAConfigurationHistory : _UILAConfigurationHistory

{
    _Bool _baselineRelativeArrangement;
    _Bool _itemOrderingChanged;
    _Bool _itemFittingSizeChanged;
    _Bool _hasEstablishedOrderingValues;
    _Bool _inOrderedArrangementUpdateSection;
    double _spacing;
    long long _distribution;
    NSMapTable *_customSpacings;
    double _proportionalFillDenominator;
}

@property (nonatomic) _Bool hasEstablishedOrderingValues;
@property (nonatomic, getter=isInOrderedArrangementUpdateSection) _Bool inOrderedArrangementUpdateSection;
@property (nonatomic) double proportionalFillDenominator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long axis;
@property (nonatomic) _Bool layoutFillsCanvas;
@property (nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic, readonly) NSSet *invalidBaselineConstraints;
@property (nonatomic) double spacing;
@property (nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement;
@property (nonatomic) long long distribution;
@property (nonatomic, setter=_setItemOrderingChanged:) _Bool _itemOrderingChanged;
@property (nonatomic, setter=_setItemFittingSizeChanged:) _Bool _itemFittingSizeChanged;
@property (nonatomic, readonly) NSMapTable *customSpacings;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
- (double)customSpacingAfterItem:(id)arg1;

@end
