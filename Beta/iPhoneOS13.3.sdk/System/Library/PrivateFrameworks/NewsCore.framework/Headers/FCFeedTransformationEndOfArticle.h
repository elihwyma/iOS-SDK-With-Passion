/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@protocol FCPurchaseProviderType;

@interface FCFeedTransformationEndOfArticle : NSObject <Swift>

{
    _Bool _isPaywallAvailable;
    unsigned long long _minimumResultHeadlineCount;
    double _paidHeadlineRatio;
    unsigned long long _maxiumInaccessibleHeadlineCount;
    id <FCPurchaseProviderType> _purchaseProvider;
}

@property (nonatomic) double paidHeadlineRatio;
@property (nonatomic) unsigned long long maxiumInaccessibleHeadlineCount;
@property (nonatomic) _Bool isPaywallAvailable;
@property (retain, nonatomic) id <FCPurchaseProviderType> purchaseProvider;
@property (nonatomic) unsigned long long minimumResultHeadlineCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithConfiguration:(id)arg1 context:(id)arg2 isPaywallAvailable:(_Bool)arg3;

- (id)transformFeedItems:(id)arg1;
- (id)transformItems:(id)arg1 isPaidBlock:(CDUnknownBlockType)arg2 sourceChannelIDProvider:(CDUnknownBlockType)arg3;
- (id)transformHeadlines:(id)arg1;

@end
