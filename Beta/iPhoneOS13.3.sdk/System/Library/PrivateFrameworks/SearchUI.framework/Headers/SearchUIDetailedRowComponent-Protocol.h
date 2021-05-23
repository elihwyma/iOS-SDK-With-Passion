/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/Swift-Protocol.h>

@class SearchUIDetailedRowModel, UIView;

@protocol SearchUIFeedbackDelegate;

@protocol SearchUIDetailedRowComponent <Swift>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (weak, nonatomic) id <SearchUIFeedbackDelegate> feedbackDelegate;

+ (unsigned short)supportsRowModel: /* Error: Ran out of types for this method. */;

- (unsigned short)updateWithContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)setupView;
- (unsigned short)updateWithRowModel: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldVerticallyCenter;

@end
