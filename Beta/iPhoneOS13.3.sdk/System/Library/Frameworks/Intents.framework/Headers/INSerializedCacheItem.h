/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface INSerializedCacheItem : NSObject <Swift>

{
    long long _type;
    NSString *_identifier;
    NSDictionary *_payload;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSDictionary *payload;

+ (_Bool)supportsSecureCoding;
+ (void)serializeCacheableObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deserializeCacheItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deserializeCacheItem:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 payload:(id)arg3;

@end
