/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/Swift-Protocol.h>

@class NSDate, NSString;

@protocol FCHeadlineMetadata <Swift>

@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) NSString *storyType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *shortExcerpt;

@end
