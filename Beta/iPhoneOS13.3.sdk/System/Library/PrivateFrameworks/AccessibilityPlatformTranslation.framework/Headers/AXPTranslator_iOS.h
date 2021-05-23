/*
 Image: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
 */

#import <AccessibilityPlatformTranslation/AXPTranslator.h>

@class AXUIElement, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface AXPTranslator_iOS : AXPTranslator

{
    NSMutableDictionary *_translationCache;
    NSMutableDictionary *_backTranslationCache;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    struct __IOHIDEventSystemClient *_ioSystemPostBackClient;
    _Bool _axAppReadyFlag;
    _Bool _accessibilityEnabled;
    struct __AXObserver *_axEventObserver;
    AXUIElement *_systemAppElement;
    AXUIElement *_systemWideElement;
}

@property (retain, nonatomic) AXUIElement *systemWideElement;
@property (retain, nonatomic) struct __AXObserver *axEventObserver;
@property (retain, nonatomic) AXUIElement *systemAppElement;

+ (id)sharedInstance;
+ (id)_iosParameterFromPlatformParameter:(id)arg1;
+ (id)translationObjectFromUIKitObject:(id)arg1;

- (id)init;
- (_Bool)accessibilityEnabled;
- (void)setAccessibilityEnabled:(_Bool)arg1;
- (void)_sendPressFingerEvent:(_Bool)arg1 location:(struct CGPoint)arg2 force:(double)arg3 contextId:(unsigned int)arg4;
- (void)_postEvent:(id)arg1;
- (id)_processAccessibilityAttributeValue:(long long)arg1;
- (id)_processAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;
- (_Bool)_processPerformAction:(int)arg1 value:(id)arg2;
- (void)enableAccessibility;
- (void)_initializeAccessibility;
- (const struct __AXUIElement *)createPlatformElementFromTranslationObject:(id)arg1;
- (long long)attributeFromRequest:(unsigned long long)arg1;
- (id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 error:(unsigned long long *)arg3;
- (id)_postProcessAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 result:(id)arg4;
- (id)axElementFromTranslatorRequest:(id)arg1;
- (id)_processCustomRotorData:(id)arg1;
- (id)_processOutgoingCustomRotorSearchResult:(id)arg1;
- (id)_processParameterizedAttributeRequest:(id)arg1 attribute:(long long)arg2 parameter:(id)arg3 error:(unsigned long long *)arg4;
- (id)_processDirectAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 parameter:(id)arg4 error:(unsigned long long *)arg5;
- (id)_processChildrenAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 parameter:(id)arg3 error:(unsigned long long *)arg4;
- (id)_axArrayWithPossiblyNilArrays:(unsigned long long)arg1;
- (id)_processAttributedLabelAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processAttributedStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processClassNameAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processCustomActionsAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processBoundsForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processIsEnabledAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processIsSelectedAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processMoveFocusToOpaqueElementAttributeRequest:(id)arg1 parameter:(id)arg2 direction:(long long)arg3 error:(unsigned long long *)arg4;
- (id)_processNumberOfCharactersAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processRoleAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processStartsMediaSessionAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processSubroleAttributeRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_processingSmuggledMarzipanRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long *)arg3;
- (id)_processRawElementDataRequest:(id)arg1 error:(unsigned long long *)arg2;
- (id)_preprocessRequest:(long long)arg1 parameter:(id)arg2;
- (id)translationObjectFromPlatformElement:(struct __AXUIElement *)arg1;
- (id)backTranslationCache;
- (id)translationCache;
- (CDUnknownBlockType)attributedStringConversionBlock;
- (void)simulatePressAtPoint:(struct CGPoint)arg1 withContextId:(unsigned int)arg2 withDelay:(float)arg3 withForce:(double)arg4;
- (void)initializeAXRuntimeForSystemAppServer;
- (void)_signalAppAXReady;
- (id)processMultipleAttributeRequest:(id)arg1;
- (id)processActionRequest:(id)arg1;
- (id)processCanSetAttribute:(id)arg1;
- (id)processSetAttribute:(id)arg1;
- (id)processSupportedActions:(id)arg1;
- (id)processAttributeRequest:(id)arg1;
- (id)processApplicationObject:(id)arg1;
- (id)processFrontMostApp:(id)arg1;
- (id)processHitTest:(id)arg1;
- (void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3;
- (id)platformElementFromTranslation:(id)arg1;

@end
