/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKBackgroundElement, IKDocumentBannerElement, IKListElement;

@interface IKListTemplate : IKViewElement

@property (retain, nonatomic, readonly) IKBackgroundElement *background;
@property (retain, nonatomic, readonly) IKDocumentBannerElement *documentBanner;
@property (retain, nonatomic, readonly) IKListElement *list;

@end
