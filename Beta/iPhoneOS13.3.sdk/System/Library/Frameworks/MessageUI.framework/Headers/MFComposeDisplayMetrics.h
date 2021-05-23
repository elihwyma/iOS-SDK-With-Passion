/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class UITraitCollection;

@interface MFComposeDisplayMetrics : NSObject

{
    UITraitCollection *_traitCollection;
    struct NSDirectionalEdgeInsets _layoutMargins;
    struct UIEdgeInsets _safeAreaInsets;
}

@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) struct NSDirectionalEdgeInsets layoutMargins;
@property (nonatomic) struct UIEdgeInsets safeAreaInsets;
@property (nonatomic, readonly) _Bool isCompactHeight;
@property (nonatomic, readonly) double trailingButtonMidlineOffset;
@property (nonatomic, readonly) struct UIEdgeInsets sendBarButtonItemImageInsets;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets headerViewSeparatorInset;

+ (id)displayMetricsWithTraitCollection:(id)arg1 layoutMargins:(struct NSDirectionalEdgeInsets)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;

@end
