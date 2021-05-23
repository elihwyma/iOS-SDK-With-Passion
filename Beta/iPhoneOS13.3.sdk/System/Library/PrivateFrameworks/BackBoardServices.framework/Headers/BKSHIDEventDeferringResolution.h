/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay;

@interface BKSHIDEventDeferringResolution : NSObject

{
    BKSHIDEventDisplay *_display;
    BKSHIDEventDeferringEnvironment *_environment;
    int _pid;
    BKSHIDEventDeferringToken *_token;
}

@property (copy, nonatomic, readonly) BKSHIDEventDisplay *display;
@property (copy, nonatomic, readonly) BKSHIDEventDeferringEnvironment *environment;
@property (nonatomic, readonly) int pid;
@property (copy, nonatomic, readonly) BKSHIDEventDeferringToken *token;

+ (_Bool)supportsSecureCoding;
+ (id)build:(CDUnknownBlockType)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithDisplay:(id)arg1 environment:(id)arg2 pid:(int)arg3 token:(id)arg4;
- (id)modifiedResolution:(CDUnknownBlockType)arg1;

@end
