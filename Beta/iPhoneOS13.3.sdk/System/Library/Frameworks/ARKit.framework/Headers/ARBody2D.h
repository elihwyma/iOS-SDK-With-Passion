/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARSkeleton2D;

@interface ARBody2D : NSObject

{
    ARSkeleton2D *_skeleton;
}

@property (nonatomic, readonly) ARSkeleton2D *skeleton;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSkeleton2D:(id)arg1;

@end
