/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, NUIGridArrangement;

@protocol SearchUIFeedbackDelegate;

@interface SearchUIAppIconsRowView : UIView

{
    id <SearchUIFeedbackDelegate> _delegate;
    NSMutableArray *_iconViews;
    NSMutableArray *_spacingHelpers;
    NSMutableArray *_endsSpacingHelpers;
    NSMutableArray *_itemAtIndex;
    NSMutableArray *_spacerDebuggerViews;
    NUIGridArrangement *_arrangment;
}

@property (retain, nonatomic) NSMutableArray *itemAtIndex;
@property (retain, nonatomic) NSMutableArray *spacerDebuggerViews;
@property (retain, nonatomic) NUIGridArrangement *arrangment;
@property (weak) id <SearchUIFeedbackDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *iconViews;
@property (retain, nonatomic) NSMutableArray *spacingHelpers;
@property (retain, nonatomic) NSMutableArray *endsSpacingHelpers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)numberOfIcons;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)didEngageResult:(id)arg1;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (long long)numberOfItemsInGridArrangement:(id)arg1;
- (id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(struct _NSRange *)arg3 rows:(struct _NSRange *)arg4 horizontalAlignment:(long long *)arg5 verticalAlignment:(long long *)arg6;
- (void)dismissIfNecessaryForIconDrag;
- (void)updateWithResultsForRow:(id)arg1;

@end
