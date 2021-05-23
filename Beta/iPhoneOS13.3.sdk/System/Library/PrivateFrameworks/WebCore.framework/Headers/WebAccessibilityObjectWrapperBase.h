/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapperBase : NSObject

{
    struct AccessibilityObject *m_object;
    unsigned int _identifier;
}

@property (nonatomic) unsigned int identifier;

+ (void)accessibilitySetShouldRepostNotifications:(_Bool)arg1;

- (void)detach;
- (id)initWithAccessibilityObject:(struct AccessibilityObject *)arg1;
- (void)accessibilityPostedNotification:(id)arg1;
- (id)attachmentView;
- (struct AccessibilityObject *)accessibilityObject;
- (struct CGPath *)convertPathToScreenSpace:(struct Path *)arg1;
- (id)baseAccessibilityDescription;
- (id)baseAccessibilityTitle;
- (id)ariaLandmarkRoleDescription;
- (id)baseAccessibilityHelpText;
- (struct CGRect)convertRectToSpace:(struct FloatRect *)arg1 space:(int)arg2;
- (void)accessibilityPostedNotification:(id)arg1 userInfo:(id)arg2;
- (id)_accessibilityWebDocumentView;
- (void)baseAccessibilitySetFocus:(_Bool)arg1;
- (id)baseAccessibilitySpeechHint;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityMathPrescriptPairs;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (struct AccessibilityObjectInterface *)axBackingObject;
- (_Bool)updateObjectBackingStore;

@end
