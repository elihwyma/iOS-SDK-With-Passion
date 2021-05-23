/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKBackgroundElement, IKButtonElement, IKDocumentBannerElement, IKMenuBarElement;

@interface IKMainTemplate : IKViewElement

@property (retain, nonatomic, readonly) IKMenuBarElement *menuBar;
@property (retain, nonatomic, readonly) IKBackgroundElement *background;
@property (retain, nonatomic, readonly) IKButtonElement *button;
@property (retain, nonatomic, readonly) IKDocumentBannerElement *banner;

@end
