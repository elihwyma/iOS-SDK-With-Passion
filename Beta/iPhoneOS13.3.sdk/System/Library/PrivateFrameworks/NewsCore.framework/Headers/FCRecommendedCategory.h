/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FCRecommendedCategory : NSObject

{
    NSString *_identifier;
    NSString *_name;
    NSArray *_topicTagIDs;
    NSArray *_channelTagIDs;
    NSArray *_subcategories;
    NSArray *_curatedTagIDs;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *topicTagIDs;
@property (nonatomic, readonly) NSArray *channelTagIDs;
@property (nonatomic, readonly) NSArray *subcategories;
@property (nonatomic, readonly) NSArray *curatedTagIDs;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 curatedTagIDs:(id)arg3 recommendedTopicTagIDs:(id)arg4 recommendedChannelTagIDs:(id)arg5 subcategories:(id)arg6;

@end
