/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@protocol FCNetworkReachabilityRequirementObserving;

@protocol FCNetworkReachabilityRequirement <Swift>

@property (nonatomic, readonly, getter=isSatisfied) _Bool satisfied;
@property (nonatomic, readonly) long long offlineReason;
@property (weak, nonatomic) id <FCNetworkReachabilityRequirementObserving> observer;

@end
