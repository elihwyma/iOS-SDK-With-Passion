/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSDate, NSString;

@protocol FCHeadlineMetadata <Swift>

@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) NSString *storyType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *shortExcerpt;

@end
