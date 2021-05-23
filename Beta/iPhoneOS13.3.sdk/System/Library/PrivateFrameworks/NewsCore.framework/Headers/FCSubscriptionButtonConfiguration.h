/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCColor, NSString, NSURL;

@interface FCSubscriptionButtonConfiguration : NSObject <Swift>

{
    _Bool _dismissLandingPagePostPurchase;
    unsigned long long _subscriptionButtonType;
    NSString *_trialText;
    NSString *_nonTrialText;
    unsigned long long _targetType;
    unsigned long long _postPurchaseActionType;
    NSURL *_postPurchaseURL;
    NSString *_landingPageArticleID;
    FCColor *_buttonColor;
    FCColor *_buttonTextColor;
}

@property (nonatomic) unsigned long long subscriptionButtonType;
@property (nonatomic) unsigned long long targetType;
@property (nonatomic) unsigned long long postPurchaseActionType;
@property (copy, nonatomic) NSURL *postPurchaseURL;
@property (copy, nonatomic) NSString *landingPageArticleID;
@property (nonatomic, getter=shouldDismissLandingPagePostPurchase) _Bool dismissLandingPagePostPurchase;
@property (copy, nonatomic) NSString *trialText;
@property (copy, nonatomic) NSString *nonTrialText;
@property (retain, nonatomic) FCColor *buttonColor;
@property (retain, nonatomic) FCColor *buttonTextColor;

+ (id)defaultLandingPageTargetSubscriptionButtonWithLandingPageArticleID:(id)arg1;
+ (id)defaultSubscriptionButtonText;
+ (id)defaultTrialText;
+ (id)defaultNonTrialText;
+ (id)defaultOsloSheetTargetSubscriptionButton;
+ (id)defaultArticleSubscriptionButtonWithLandingPageArticleID:(id)arg1;
+ (id)defaultLandingPageSubscriptionButtonWithLandingPageArticleID:(id)arg1;
+ (id)defaultIssueCoverSubscriptionButtonWithLandingPageArticleID:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithSubscriptionButtonType:(unsigned long long)arg1 trialText:(id)arg2 nonTrialText:(id)arg3 buttonColor:(id)arg4 buttonTextColor:(id)arg5 targetType:(unsigned long long)arg6 postPurchaseActionType:(unsigned long long)arg7 postPurchaseURL:(id)arg8 landingPageArticleID:(id)arg9 dismissLandingPagePostPurchase:(_Bool)arg10;

@end
