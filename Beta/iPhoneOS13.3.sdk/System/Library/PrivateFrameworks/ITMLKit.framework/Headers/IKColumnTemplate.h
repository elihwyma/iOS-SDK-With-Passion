/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKColumnCollectionElement, IKDocumentBannerElement;

@interface IKColumnTemplate : IKViewElement

@property (retain, nonatomic, readonly) IKDocumentBannerElement *documentBanner;
@property (retain, nonatomic, readonly) IKColumnCollectionElement *columnCollection;

@end
