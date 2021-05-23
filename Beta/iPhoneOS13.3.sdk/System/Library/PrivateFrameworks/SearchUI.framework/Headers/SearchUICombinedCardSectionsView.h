/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, NSString, NUIGridArrangement, SearchUICombinedCardSectionRowModel;

@protocol SearchUIFeedbackDelegate;

@interface SearchUICombinedCardSectionsView : UIView

{
    SearchUICombinedCardSectionRowModel *_rowModel;
    id <SearchUIFeedbackDelegate> _feedbackDelegate;
    NUIGridArrangement *_arrangement;
    NSMutableDictionary *_cardSectionsMapping;
    NSMutableArray *_uncacheableViews;
    NSMutableArray *_viewList;
}

@property (retain, nonatomic) NUIGridArrangement *arrangement;
@property (retain, nonatomic) NSMutableDictionary *cardSectionsMapping;
@property (retain, nonatomic) NSMutableArray *uncacheableViews;
@property (retain, nonatomic) NSMutableArray *viewList;
@property (retain, nonatomic) SearchUICombinedCardSectionRowModel *rowModel;
@property (weak, nonatomic) id <SearchUIFeedbackDelegate> feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (long long)numberOfItemsInGridArrangement:(id)arg1;
- (id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(struct _NSRange *)arg3 rows:(struct _NSRange *)arg4 horizontalAlignment:(long long *)arg5 verticalAlignment:(long long *)arg6;
- (void)resetStateOfViews;
- (id)visibleViewList;

@end
