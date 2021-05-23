/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBFeedConfiguration.h>

@interface NTPBFeedConfiguration (FCAdditions)

+ (id)feedConfigurationFromJSON:(id)arg1;
+ (id)feedConfigurationFromDict:(id)arg1;

- (id)feedIDForBin:(long long)arg1 paid:(_Bool)arg2;

@end
