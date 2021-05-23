/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class CPSBannerItem, NSString, SBUIBannerContext;

@interface CPSBannerView : UIView

{
    CPSBannerItem *_bannerItem;
    SBUIBannerContext *_bannerContext;
}

@property (retain, nonatomic) SBUIBannerContext *bannerContext;
@property (retain, nonatomic) CPSBannerItem *bannerItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithContext:(id)arg1;
- (id)applicationIconImage;
- (void)updateBannerWithBannerItem:(id)arg1;

@end
