/*
 Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
 */

#import <NewsTransport/NTPBEvent.h>

@interface NTPBEvent (NSSAdditions)

+ (id)nss_eventWithIdentifier;

- (void)nss_setStartDate:(id)arg1;
- (void)nss_setEndDate:(id)arg1;
- (void)nss_setStartDate:(id)arg1 endDate:(id)arg2;

@end
