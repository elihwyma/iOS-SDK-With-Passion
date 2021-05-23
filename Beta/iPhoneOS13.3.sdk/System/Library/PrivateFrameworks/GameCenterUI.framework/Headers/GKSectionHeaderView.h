/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKHeaderWithUnderlineView.h>

@class GKButton, GKLabel, NSString;

@interface GKSectionHeaderView : GKHeaderWithUnderlineView

{
    _Bool _manualItemCount;
    _Bool _allSectionItemsVisible;
    SEL _showAllAction;
    id _rightTarget;
    SEL _rightAction;
    CDUnknownFunctionPointerType _itemCountFormatter;
    long long _maxRange;
    GKLabel *_leftLabel;
    GKButton *_rightButton;
    unsigned long long _sectionIndex;
    long long _itemCount;
    long long _maxItemCount;
}

@property (retain, nonatomic) GKLabel *leftLabel;
@property (retain, nonatomic) GKButton *rightButton;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) long long itemCount;
@property (nonatomic) long long maxItemCount;
@property (nonatomic) _Bool allSectionItemsVisible;
@property (retain, nonatomic) NSString *leftText;
@property (retain, nonatomic) NSString *rightText;
@property (nonatomic) SEL showAllAction;
@property (nonatomic) id rightTarget;
@property (nonatomic) SEL rightAction;
@property (nonatomic) CDUnknownFunctionPointerType itemCountFormatter;
@property (nonatomic) _Bool manualItemCount;
@property (nonatomic) long long maxRange;

+ (id)phoneMetrics;
+ (id)padMetrics;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateLabel;
- (void)rightButtonTouched:(id)arg1;
- (void)updateGutterConstraints;
- (void)establishConstraints;
- (struct CGRect)rightButtonFrame;

@end
