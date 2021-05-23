/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ARRaycastQuery : NSObject

{
    long long _target;
    long long _targetAlignment;
    MISSING_TYPE *_origin;
    MISSING_TYPE *_direction;
}

@property (nonatomic, readonly) MISSING_TYPE *origin;
@property (nonatomic, readonly) MISSING_TYPE *direction;
@property (nonatomic, readonly) long long target;
@property (nonatomic, readonly) long long targetAlignment;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithOrigin:(long long)arg1 direction:(long long)arg2 allowingTarget:alignment: /* Error: Ran out of types for this method. */;

@end
