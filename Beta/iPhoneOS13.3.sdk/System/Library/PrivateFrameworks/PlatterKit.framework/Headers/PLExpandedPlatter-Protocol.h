/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <PlatterKit/Swift-Protocol.h>

@class NSArray, UIControl, UIScrollView;

@protocol PLExpandedPlatter <Swift>

@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) struct CGSize customContentSize;
@property (retain, nonatomic) NSArray *interfaceActions;
@property (nonatomic, getter=isActionsHidden) _Bool actionsHidden;
@property (nonatomic, readonly) UIControl *dismissControl;
@property (nonatomic, readonly) struct UIEdgeInsets dismissControlInsets;
@property (nonatomic) long long dismissControlPosition;
@property (nonatomic) _Bool clipsVisibleContentToBounds;
@property (nonatomic) double contentBottomInset;

- (unsigned short)scrollViewFrame;
- (unsigned short)sizeExcludingActions;
- (unsigned short)contentSizeExcludingActions;
- (unsigned short)actionsSizeThatFits: /* Error: Ran out of types for this method. */;
- (unsigned short)frameForPlatterFrame: /* Error: Ran out of types for this method. */;
- (unsigned short)platterFrameForFrame: /* Error: Ran out of types for this method. */;
- (unsigned short)minimumScrollViewContentInsets;

@end
