/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDispatchingTarget : NSObject

{
    BKSHIDEventDeferringEnvironment *_environment;
    int _pid;
}

@property (nonatomic, readonly) int pid;
@property (copy, nonatomic, readonly) BKSHIDEventDeferringEnvironment *deferringEnvironment;

+ (_Bool)supportsSecureCoding;
+ (id)systemTarget;
+ (id)keyboardFocusTarget;
+ (id)targetForDeferringEnvironment:(id)arg1;
+ (id)targetForPID:(int)arg1 environment:(id)arg2;
+ (id)focusTargetForPID:(int)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithEnvironment:(id)arg1 pid:(int)arg2;

@end
