/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, SKUIAttributedStringLayout, UIColor;

@protocol SKUILinkHandler;

__attribute__((visibility("hidden")))
@interface SKUIAttributedStringView : UIView

{
    double _calculatedTopInset;
    long long _firstLineTopInset;
    SKUIAttributedStringLayout *_layout;
    NSLayoutManager *_layoutManager;
    NSArray *_requiredBadges;
    long long _stringTreatment;
    _Bool _touchInside;
    struct _NSRange _trackingRange;
    _Bool _trackingTouch;
    struct CGRect _textBounds;
    UIColor *_textColor;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    UIColor *_treatmentColor;
    _Bool _containsLinks;
    _Bool _textColorFollowsTintColor;
    id <SKUILinkHandler> _linkDelegate;
    long long _badgePlacement;
}

@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, readonly) double firstBaselineOffset;
@property (nonatomic) long long firstLineTopInset;
@property (retain, nonatomic) SKUIAttributedStringLayout *layout;
@property (copy, nonatomic) NSArray *requiredBadges;
@property (nonatomic) long long badgePlacement;
@property (nonatomic) long long stringTreatment;
@property (retain, nonatomic) UIColor *treatmentColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) _Bool textColorFollowsTintColor;
@property (nonatomic, readonly) _Bool usesTallCharacterSet;
@property (nonatomic) _Bool containsLinks;
@property (weak, nonatomic) id <SKUILinkHandler> linkDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)sizeWithLayout:(id)arg1 treatment:(long long)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWasRecycled;
- (void)_reloadTopInset;
- (_Bool)_touchInsideLinkText:(struct CGPoint)arg1 linkTextRange:(struct _NSRange *)arg2;
- (void)_setTrackingTouch:(_Bool)arg1;
- (void)_setTouchInside:(_Bool)arg1;
- (void)_setupTapLocatorContainer;

@end
