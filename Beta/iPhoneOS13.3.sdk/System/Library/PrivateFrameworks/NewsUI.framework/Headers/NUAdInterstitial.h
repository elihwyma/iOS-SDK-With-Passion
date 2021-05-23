/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class ADInterstitialAd, NSString;

@interface NUAdInterstitial : NSObject

{
    ADInterstitialAd *_interstitial;
    CDUnknownBlockType _completionBlock;
}

@property (retain, nonatomic) ADInterstitialAd *interstitial;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)interstitialAdDidUnload:(id)arg1;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)missedOpportunityToFill;
- (id)initWithContext:(id)arg1 andCompletionBlock:(CDUnknownBlockType)arg2;

@end
