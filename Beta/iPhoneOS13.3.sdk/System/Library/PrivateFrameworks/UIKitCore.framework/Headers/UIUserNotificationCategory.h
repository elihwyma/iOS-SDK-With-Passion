/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface UIUserNotificationCategory : NSObject <Swift>

{
    NSString *_identifier;
    NSDictionary *_actionsByContext;
}

@property (copy, nonatomic) NSDictionary *actionsByContext;
@property (copy, nonatomic) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)actions;
- (id)actionsForContext:(unsigned long long)arg1;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)arg1;
- (id)initWithIdentifier:(id)arg1 actionsByContext:(id)arg2;
- (id)validatedCategory;

@end
