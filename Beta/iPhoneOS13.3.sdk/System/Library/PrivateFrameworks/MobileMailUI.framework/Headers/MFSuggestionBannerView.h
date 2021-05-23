/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

@class NSArray, SGBanner;

@interface MFSuggestionBannerView

{
    SGBanner *_banner;
    NSArray *_bannerConstraints;
}

@property (retain, nonatomic) NSArray *bannerConstraints;
@property (retain, nonatomic) SGBanner *banner;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)willMoveToSuperview:(id)arg1;
- (void)setSeparatorDrawsFlushWithTrailingEdge:(_Bool)arg1;
- (void)setSeparatorDrawsFlushWithLeadingEdge:(_Bool)arg1;
- (void)commonInitWithBanner:(id)arg1;
- (id)_constraintsForEdges:(unsigned long long)arg1 banner:(id)arg2 useLayoutMarginsGuide:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 banner:(id)arg2;

@end
