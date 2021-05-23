/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UIAccessibilityAutomationAction : NSObject

{
    NSString *_identifier;
    SEL _selector;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) SEL selector;

- (id)initWithIdentifier:(id)arg1 selector:(SEL)arg2;

@end
