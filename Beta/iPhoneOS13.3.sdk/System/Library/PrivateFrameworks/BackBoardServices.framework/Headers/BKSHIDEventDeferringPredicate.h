/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay;

@interface BKSHIDEventDeferringPredicate : NSObject

{
    BKSHIDEventDeferringEnvironment *_environment;
    BKSHIDEventDisplay *_display;
    BKSHIDEventDeferringToken *_token;
}

@property (nonatomic, readonly) BKSHIDEventDeferringEnvironment *environment;
@property (copy, nonatomic, readonly) BKSHIDEventDisplay *display;
@property (copy, nonatomic, readonly) BKSHIDEventDeferringToken *token;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithEnvironment:(id)arg1 display:(id)arg2 token:(id)arg3;

@end
