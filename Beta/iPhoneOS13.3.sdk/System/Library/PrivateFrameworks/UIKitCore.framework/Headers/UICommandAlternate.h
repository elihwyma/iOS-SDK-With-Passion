/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface UICommandAlternate : NSObject <Swift>

{
    NSString *_title;
    SEL _action;
    long long _modifierFlags;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) long long modifierFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)alternateWithTitle:(id)arg1 action:(SEL)arg2 modifierFlags:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (void)_performWithTarget:(id)arg1;
- (long long)_leafKeyModifierFlags;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2 modifierFlags:(long long)arg3;
- (id)initWithModifierFlags:(long long)arg1;

@end
