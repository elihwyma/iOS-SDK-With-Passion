/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PIReframeSubject : NSObject

{
    long long _type;
    long long _identifier;
    double _confidence;
    long long _source;
    long long _edgeBleed;
    struct CGRect _bounds;
    struct CGRect _expandedBounds;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) long long source;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGRect expandedBounds;
@property (nonatomic) long long edgeBleed;
@property (nonatomic, readonly) _Bool isHuman;
@property (nonatomic, readonly) _Bool isAnimal;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 source:(long long)arg2 identifier:(long long)arg3 confidence:(double)arg4;

@end
