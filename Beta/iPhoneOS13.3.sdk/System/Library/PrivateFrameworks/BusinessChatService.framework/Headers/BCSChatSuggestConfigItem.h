/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface BCSChatSuggestConfigItem : NSObject

{
    long long _buckets;
    long long _shards;
    NSDate *_expirationDate;
}

@property (nonatomic, readonly) long long buckets;
@property (nonatomic, readonly) long long shards;
@property (copy, nonatomic, readonly) NSDate *expirationDate;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObj:(id)arg1;
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3;

@end
