/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, NSObject, NSString, NUIContainerStackView, UIFont;

@protocol CNActionsViewProtocol;

@interface CNActionsView : UIView

{
    NSObject<CNActionsViewProtocol> *_actionsDelegate;
    NSArray *_sortedActionTypes;
    double _spacing;
    long long _style;
    NUIContainerStackView *_stackView;
    NSMutableDictionary *_actionItemsByType;
    NSMutableDictionary *_actionViewsByType;
    UIFont *_titleFont;
}

@property (retain, nonatomic) NUIContainerStackView *stackView;
@property (retain, nonatomic) NSMutableDictionary *actionItemsByType;
@property (retain, nonatomic) NSMutableDictionary *actionViewsByType;
@property (retain, nonatomic) UIFont *titleFont;
@property (weak, nonatomic) NSObject<CNActionsViewProtocol> *actionsDelegate;
@property (copy, nonatomic) NSArray *sortedActionTypes;
@property (nonatomic) double spacing;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)intrinsicContentSizeForHorizontalLayoutForActionsViews:(id)arg1 spacing:(double)arg2;
+ (struct CGSize)intrinsicContentSizeForVerticalLayoutForActionsViews:(id)arg1 spacing:(double)arg2;
+ (long long)axisWithTitlesPresent:(_Bool)arg1;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didPressActionView:(id)arg1 longPress:(_Bool)arg2;
- (unsigned long long)insertionIndexForType:(id)arg1;
- (id)actionViewForType:(id)arg1;
- (void)addActionItem:(id)arg1;
- (void)removeActionItem:(id)arg1;
- (void)updateActionItem:(id)arg1;
- (void)updateAxis;
- (void)resetActions;

@end
