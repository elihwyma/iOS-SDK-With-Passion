/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsTransport/NTPBTodaySectionConfigWebEmbed.h>

@class NSURL;

@interface NTPBTodaySectionConfigWebEmbed (NTAdditions)

@property (copy, nonatomic, readonly) NSURL *URL;

- (id)identifier;
- (unsigned long long)itemType;

@end
