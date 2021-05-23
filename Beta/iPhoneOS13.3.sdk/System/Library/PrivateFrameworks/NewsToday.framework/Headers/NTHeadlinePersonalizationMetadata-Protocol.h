/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/Swift-Protocol.h>

@class NSDictionary, NSString;

@protocol NTHeadlinePersonalizationMetadata <Swift>

@property (copy, nonatomic, readonly) NSString *articleID;
@property (copy, nonatomic, readonly) NSString *publisherID;
@property (copy, nonatomic, readonly) NSDictionary *scoredTopicIDs;

@end
