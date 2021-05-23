/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class NSError, NSSet, NSString;

@interface AXSSMotionTrackingState : NSObject

{
    NSError *_error;
    NSSet *_expressions;
    struct CGPoint _lookAtPoint;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct CGPoint lookAtPoint;
@property (copy, nonatomic) NSSet *expressions;
@property (copy, nonatomic, readonly) NSString *debugString;
@property (nonatomic, readonly) _Bool hasFace;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
