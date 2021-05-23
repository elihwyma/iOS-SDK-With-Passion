/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKBackgroundElement, IKLockupElement, IKTextElement, NSArray, UIColor;

@interface IKDocumentBannerElement : IKViewElement

{
    _Bool _fixed;
}

@property (retain, nonatomic, readonly) IKTextElement *title;
@property (retain, nonatomic, readonly) IKTextElement *subtitle;
@property (retain, nonatomic, readonly) IKBackgroundElement *background;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly, getter=isFixed) _Bool fixed;
@property (retain, nonatomic, readonly) NSArray *buttons;
@property (retain, nonatomic, readonly) IKLockupElement *lockup;

- (_Bool)fixed;

@end
