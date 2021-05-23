/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKBackgroundElement, IKCollectionListElement, IKDocumentBannerElement;

@interface IKStackTemplate : IKViewElement

@property (retain, nonatomic, readonly) IKBackgroundElement *background;
@property (retain, nonatomic, readonly) IKDocumentBannerElement *documentBanner;
@property (retain, nonatomic, readonly) IKCollectionListElement *collectionList;

@end
