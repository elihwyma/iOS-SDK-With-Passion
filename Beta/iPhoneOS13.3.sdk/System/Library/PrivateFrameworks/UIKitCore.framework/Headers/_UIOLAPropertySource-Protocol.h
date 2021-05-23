/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSMapTable;

@protocol _UIOLAPropertySource <Swift>

@property (nonatomic) double spacing;
@property (nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement;
@property (nonatomic) long long distribution;
@property (nonatomic, setter=_setItemOrderingChanged:) _Bool _itemOrderingChanged;
@property (nonatomic, setter=_setItemFittingSizeChanged:) _Bool _itemFittingSizeChanged;
@property (nonatomic, readonly) NSMapTable *customSpacings;

- (unsigned short)setCustomSpacing:afterItem: /* Error: Ran out of types for this method. */;
- (unsigned short)customSpacingAfterItem: /* Error: Ran out of types for this method. */;

@end
