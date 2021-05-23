/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/Swift-Protocol.h>

@class NSString;

@protocol NTTodayItem <Swift>

@property (nonatomic, readonly) unsigned long long itemType;
@property (copy, nonatomic, readonly) NSString *identifier;

@end
