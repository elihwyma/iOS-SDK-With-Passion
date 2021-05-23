/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface _ADPolicyEngineEvent : NSObject

{
    CDUnknownBlockType _bannersLoadedHandler;
    NSMutableArray *_banners;
    NSMutableArray *_bannersWaitingOnLoad;
}

@property (copy, nonatomic) CDUnknownBlockType bannersLoadedHandler;
@property (retain, nonatomic) NSMutableArray *banners;
@property (retain, nonatomic) NSMutableArray *bannersWaitingOnLoad;
@property (nonatomic, readonly) NSArray *bannerIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)_considerCallingLoadedHandler;
- (void)addBannerForCreativeType:(int)arg1;
- (id)loadedBannerWithIdentifier:(id)arg1;
- (void)waitForLoadsForBanners:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
