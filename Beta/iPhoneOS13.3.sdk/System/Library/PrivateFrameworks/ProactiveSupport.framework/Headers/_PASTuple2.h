/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

#import <ProactiveSupport/Swift-Protocol.h>

@interface _PASTuple2 : NSObject <Swift>

{
    NSObject *_first;
    NSObject *_second;
}

@property (nonatomic, readonly) NSObject *first;
@property (nonatomic, readonly) NSObject *second;

+ (id)tupleWithFirst:(id)arg1 second:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (_Bool)isEqualToTuple2:(id)arg1;

@end
