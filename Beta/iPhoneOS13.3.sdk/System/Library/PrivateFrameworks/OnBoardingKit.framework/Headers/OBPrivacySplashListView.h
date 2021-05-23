/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIStackView.h>

@class NSMutableArray, UITextView;

@interface OBPrivacySplashListView : UIStackView

{
    _Bool _displayingPrivacyPane;
    UITextView *_footerTextView;
    NSMutableArray *_textViews;
    NSMutableArray *_stackedIconTextLists;
}

@property _Bool displayingPrivacyPane;
@property (retain, nonatomic) NSMutableArray *textViews;
@property (retain, nonatomic) NSMutableArray *stackedIconTextLists;
@property (nonatomic, readonly) UITextView *footerTextView;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 displayingPrivacyPane:(_Bool)arg3;
- (void)updateSpacing;
- (void)updateFonts;
- (void)updateTextAlignment;
- (id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2;

@end
