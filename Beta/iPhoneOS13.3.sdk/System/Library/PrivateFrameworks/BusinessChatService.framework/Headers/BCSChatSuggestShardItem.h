/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, _PASBloomFilter;

@interface BCSChatSuggestShardItem : NSObject

{
    _PASBloomFilter *_bloomFilter;
    NSString *_bloomFilterString;
    long long _startIndex;
    long long _shardCount;
    NSDate *_expirationDate;
}

@property (nonatomic, readonly) _PASBloomFilter *bloomFilter;
@property (nonatomic, readonly) NSString *bloomFilterString;
@property (nonatomic, readonly) long long startIndex;
@property (nonatomic, readonly) long long shardCount;
@property (copy, nonatomic, readonly) NSDate *expirationDate;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)containsValue:(long long)arg1;
- (id)initWithJSONObj:(id)arg1;
- (id)initWithBloomFilter:(id)arg1 bloomFilterString:(id)arg2 startIndex:(long long)arg3 shardCount:(long long)arg4 expirationDate:(id)arg5;
- (id)initWithBloomFilterString:(id)arg1 startIndex:(long long)arg2 shardCount:(long long)arg3 expirationDate:(id)arg4;

@end
