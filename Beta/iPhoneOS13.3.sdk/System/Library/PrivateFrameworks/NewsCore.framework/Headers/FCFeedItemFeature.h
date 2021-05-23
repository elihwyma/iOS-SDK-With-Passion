/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCFeedItemFeature : NSObject <Swift>

{
    _Bool _queryable;
    NSString *_key;
    long long _type;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic) _Bool queryable;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *topicID;

+ (id)featureForTopicID:(id)arg1;
+ (id)featureForAllArticles;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 key:(id)arg2;

@end
