/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSString, SearchUIDetailedRowModel, UIView;

@protocol SearchUIAccessoryViewDelegate, SearchUIFeedbackDelegate;

@interface SearchUIAccessoryViewController : NSObject

{
    SearchUIDetailedRowModel *rowModel;
    UIView *view;
    id <SearchUIFeedbackDelegate> feedbackDelegate;
    id <SearchUIAccessoryViewDelegate> _delegate;
}

@property (retain, nonatomic) UIView *view;
@property (weak) id <SearchUIAccessoryViewDelegate> delegate;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (weak, nonatomic) id <SearchUIFeedbackDelegate> feedbackDelegate;

+ (_Bool)supportsRowModel:(id)arg1;
+ (Class)accessoryViewClassForRowModel:(id)arg1;

- (id)init;
- (void)hide;
- (void)updateWithContacts:(id)arg1;
- (id)setupView;
- (void)buttonPressed;
- (void)updateWithRowModel:(id)arg1;
- (_Bool)shouldVerticallyCenter;
- (void)didEngageAction:(unsigned long long)arg1 destination:(unsigned long long)arg2;
- (_Bool)shouldTopAlignForAccessibilityContentSizes;
- (id)controlInView:(id)arg1;

@end
