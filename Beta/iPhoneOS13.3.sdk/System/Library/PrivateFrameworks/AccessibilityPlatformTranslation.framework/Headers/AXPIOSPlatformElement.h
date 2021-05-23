/*
 Image: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
 */

#import <UIKit/UIAccessibilityElement.h>

@class AXPTranslationObject, NSString;

@interface AXPIOSPlatformElement : UIAccessibilityElement

{
    AXPTranslationObject *translation;
}

@property (retain, nonatomic) AXPTranslationObject *translation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)platformElementWithTranslationObject:(id)arg1;
+ (id)platformElementWithTranslationObject:(id)arg1 rootParent:(id)arg2;

@end
