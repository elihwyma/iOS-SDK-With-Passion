/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCNetworkReachabilityRequirementObserving;

@interface FCSupportedCountryNetworkReachabilityRequirement : NSObject

{
    _Bool _satisfied;
    id <FCNetworkReachabilityRequirementObserving> observer;
}

@property (nonatomic, getter=isSatisfied) _Bool satisfied;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long offlineReason;
@property (weak, nonatomic) id <FCNetworkReachabilityRequirementObserving> observer;

- (id)init;
- (void)_update;

@end
