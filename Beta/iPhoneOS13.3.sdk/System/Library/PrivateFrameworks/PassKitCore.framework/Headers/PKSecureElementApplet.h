/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKSecureElementApplet : NSObject <Swift>

{
    _Bool _locked;
    NSString *_identifier;
    unsigned long long _lifecycleState;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long lifecycleState;
@property (nonatomic, readonly, getter=isLocked) _Bool locked;

+ (_Bool)supportsSecureCoding;
+ (id)secureElementAppletWithInternalApplet:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2 locked:(_Bool)arg3;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2;

@end
