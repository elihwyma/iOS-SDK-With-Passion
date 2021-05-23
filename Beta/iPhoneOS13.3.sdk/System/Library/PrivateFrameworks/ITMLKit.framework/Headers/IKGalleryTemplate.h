/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKBackgroundElement, IKDocumentBannerElement, IKGridElement;

@interface IKGalleryTemplate : IKViewElement

@property (retain, nonatomic, readonly) IKBackgroundElement *background;
@property (retain, nonatomic, readonly) IKDocumentBannerElement *documentBanner;
@property (retain, nonatomic, readonly) IKGridElement *grid;

@end
