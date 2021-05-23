/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSString, SearchUIDetailedRowModel, UIView;

@protocol SearchUIFeedbackDelegate;

@interface SearchUILeadingViewController : NSObject

{
    SearchUIDetailedRowModel *rowModel;
    id <SearchUIFeedbackDelegate> feedbackDelegate;
    UIView *_view;
}

@property (readonly) unsigned long long type;
@property (retain, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (weak, nonatomic) id <SearchUIFeedbackDelegate> feedbackDelegate;

+ (_Bool)supportsRowModel:(id)arg1;
+ (Class)leadingViewClassForRowModel:(id)arg1;

- (id)init;
- (id)imageView;
- (void)hide;
- (void)updateWithContacts:(id)arg1;
- (id)setupView;
- (void)updateWithRowModel:(id)arg1;
- (_Bool)shouldVerticallyCenter;
- (void)forceVerticalCenteringOfContents;

@end
