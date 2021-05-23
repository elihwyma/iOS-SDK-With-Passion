/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXADBannerView, SXAdRequest;

@interface SXAdResponse : NSObject

{
    SXAdRequest *_request;
    SXADBannerView *_bannerView;
}

@property (retain, nonatomic) SXAdRequest *request;
@property (retain, nonatomic) SXADBannerView *bannerView;

@end
