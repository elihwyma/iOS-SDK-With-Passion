/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray, UIImage, VUIScoreboardLayout;

@protocol VUIScorecardViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIScorecardView : UIView

{
    _Bool _didCalculatedSize;
    _Bool _delegateRespondsToBackgroundImageForScorecardViewMaterial;
    _Bool _delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;
    id <VUIScorecardViewDelegate> _delegate;
    VUIScoreboardLayout *_scoreboardLayout;
    double _interitemSpacing;
    NSArray *_rowScoreValueSizes;
    NSArray *_columnWidths;
    NSArray *_rowHeights;
    UIImage *_darkMaterialImage;
    struct CGSize _scorecardSize;
}

@property (nonatomic) _Bool didCalculatedSize;
@property (nonatomic) struct CGSize scorecardSize;
@property (nonatomic) double interitemSpacing;
@property (retain, nonatomic) NSArray *rowScoreValueSizes;
@property (retain, nonatomic) NSArray *columnWidths;
@property (retain, nonatomic) NSArray *rowHeights;
@property (retain, nonatomic) UIImage *darkMaterialImage;
@property (nonatomic) _Bool delegateRespondsToBackgroundImageForScorecardViewMaterial;
@property (nonatomic) _Bool delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;
@property (weak, nonatomic) id <VUIScorecardViewDelegate> delegate;
@property (retain, nonatomic) VUIScoreboardLayout *scoreboardLayout;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)invalidateData;
- (struct CGSize)_calculateMetricsOfScorecard;
- (void)_calculateColumnSpacing;

@end
