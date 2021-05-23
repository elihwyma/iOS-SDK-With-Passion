/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, NSSet, NSString;

@interface BKSHIDEventKeyCommandsRegistration : NSObject <Swift>

{
    BKSHIDEventDeferringEnvironment *_environment;
    BKSHIDEventDeferringToken *_token;
    NSSet *_keyCommands;
}

@property (copy, nonatomic, readonly) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (copy, nonatomic, readonly) BKSHIDEventDeferringToken *deferringToken;
@property (copy, nonatomic, readonly) NSSet *keyCommands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithEnvironment:(id)arg1 token:(id)arg2 keyCommands:(id)arg3;

@end
