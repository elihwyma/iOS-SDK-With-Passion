/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface UITextInputPasswordRules : NSObject <Swift>

{
    NSString *_passwordRulesDescriptor;
}

@property (nonatomic, readonly) NSString *passwordRulesDescriptor;

+ (_Bool)supportsSecureCoding;
+ (id)passwordRulesWithDescriptor:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initPasswordRulesWithDescriptor:(id)arg1;

@end
