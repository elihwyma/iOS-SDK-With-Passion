/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@class UITraitCollection;

@protocol NULayoutContext <Swift>

@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly, getter=isLandscape) _Bool landscape;
@property (nonatomic, readonly) struct CGRect bounds;

@end
