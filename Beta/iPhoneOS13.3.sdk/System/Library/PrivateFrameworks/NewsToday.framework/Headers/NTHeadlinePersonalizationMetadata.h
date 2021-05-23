/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface NTHeadlinePersonalizationMetadata : NSObject

{
    NSString *_articleID;
    NSString *_publisherID;
    NSDictionary *_scoredTopicIDs;
}

@property (copy, nonatomic, readonly) NSString *articleID;
@property (copy, nonatomic, readonly) NSString *publisherID;
@property (copy, nonatomic, readonly) NSDictionary *scoredTopicIDs;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithArticleID:(id)arg1 publisherID:(id)arg2 scoredTopicIDs:(id)arg3;

@end
