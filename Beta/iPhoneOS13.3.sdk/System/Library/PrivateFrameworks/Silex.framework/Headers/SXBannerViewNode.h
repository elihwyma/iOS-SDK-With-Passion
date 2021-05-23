/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class ADBannerView;

@interface SXBannerViewNode : NSObject

{
    ADBannerView *_bannerView;
    struct CGRect _frame;
}

@property (nonatomic, readonly) ADBannerView *bannerView;
@property (nonatomic, readonly) struct CGRect frame;

+ (id)nodeWithBannerView:(id)arg1;

@end
