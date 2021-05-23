/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeAccessibilityConfiguration : NSObject

{
    NSString *accessibilityConfigurationHint;
    NSString *accessibilityConfigurationIdentifier;
    NSString *accessibilityConfigurationLabel;
    NSNumber *accessibilityConfigurationTraits;
    NSNumber *isAccessibilityConfigurationElement;
    NSObject *object;
}

@property (retain, nonatomic) NSString *accessibilityConfigurationHint;
@property (retain, nonatomic) NSString *accessibilityConfigurationIdentifier;
@property (retain, nonatomic) NSString *accessibilityConfigurationLabel;
@property (retain, nonatomic) NSNumber *accessibilityConfigurationTraits;
@property (retain, nonatomic) NSNumber *isAccessibilityConfigurationElement;
@property (retain, nonatomic) NSObject *object;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyConfiguration;
- (id)initWithObject:(id)arg1 label:(id)arg2 identifier:(id)arg3 hint:(id)arg4 traits:(id)arg5 andIsAccessibilityElement:(id)arg6;
- (id)initWithObject:(id)arg1 label:(id)arg2 hint:(id)arg3 traits:(id)arg4 andIsAccessibilityElement:(id)arg5;

@end
