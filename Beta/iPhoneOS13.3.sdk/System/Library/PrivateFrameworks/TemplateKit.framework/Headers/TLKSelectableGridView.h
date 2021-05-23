/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSArray, NSMutableArray, NSString, NUIContainerGridView;

@protocol TLKSelectableGridViewDelegate;

@interface TLKSelectableGridView

{
    long long _selectedIndex;
    NSArray *_tuples;
    id <TLKSelectableGridViewDelegate> _delegate;
    NSMutableArray *_buttons;
}

@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) NSArray *tuples;
@property (nonatomic) long long selectedIndex;
@property (weak) id <TLKSelectableGridViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)maxColumns;
+ (unsigned long long)idealNumberOfColumnsForTitles:(id)arg1 fittingSize:(struct CGSize)arg2 containerView:(id)arg3;

- (id)_createButton;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (void)selectableGridButtonPressed:(id)arg1;
- (id)arrangedEntrySubviews;

@end
