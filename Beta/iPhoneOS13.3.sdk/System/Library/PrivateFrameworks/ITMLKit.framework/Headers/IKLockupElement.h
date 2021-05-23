/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKImageElement, IKOrdinalElement, IKTextElement;

@interface IKLockupElement : IKViewElement

@property (retain, nonatomic, readonly) IKImageElement *image;
@property (retain, nonatomic, readonly) IKImageElement *fullscreenImage;
@property (retain, nonatomic, readonly) IKTextElement *title;
@property (retain, nonatomic, readonly) IKTextElement *subtitle;
@property (retain, nonatomic, readonly) IKTextElement *descriptionText;
@property (retain, nonatomic, readonly) IKOrdinalElement *ordinal;
@property (nonatomic, readonly) _Bool showTitlesOnFocus;
@property (retain, nonatomic, readonly) IKViewElement *overlays;

@end
