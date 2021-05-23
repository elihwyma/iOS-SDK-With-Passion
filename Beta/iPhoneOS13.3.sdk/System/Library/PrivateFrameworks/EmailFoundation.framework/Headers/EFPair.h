/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@protocol NSObject;

@interface EFPair : NSObject

{
    id <NSObject> _first;
    id <NSObject> _second;
}

@property (nonatomic, readonly) id <NSObject> first;
@property (nonatomic, readonly) id <NSObject> second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (_Bool)isEqualToPair:(id)arg1;

@end
