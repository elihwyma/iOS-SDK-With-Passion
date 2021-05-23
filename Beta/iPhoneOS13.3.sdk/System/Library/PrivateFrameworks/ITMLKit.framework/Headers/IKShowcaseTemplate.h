/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKBackgroundElement, IKCarouselElement, IKDocumentBannerElement, NSArray;

@interface IKShowcaseTemplate : IKViewElement

@property (retain, nonatomic, readonly) NSArray *modes;
@property (retain, nonatomic, readonly) IKDocumentBannerElement *documentBanner;
@property (retain, nonatomic, readonly) IKCarouselElement *carousel;
@property (retain, nonatomic, readonly) IKBackgroundElement *background;
@property (nonatomic, readonly) unsigned long long transition;

@end
