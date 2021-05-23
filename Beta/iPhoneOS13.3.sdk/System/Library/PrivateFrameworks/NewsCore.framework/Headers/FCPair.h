/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@interface FCPair : NSObject <Swift>

{
    id mFirst;
    id mSecond;
}

+ (id)pair;
+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
+ (id)pairWithPair:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)second;
- (id)first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)initWithPair:(id)arg1;
- (void)p_SetFirst:(id)arg1;
- (void)p_SetSecond:(id)arg1;

@end
