/*
 Image: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol AXPTranslationDelegateHelper, AXPTranslationRuntimeHelper, AXPTranslationSystemAppDelegate, AXPTranslationTokenDelegateHelper;

@interface AXPTranslator : NSObject

{
    _Bool _accessibilityEnabled;
    _Bool _supportsDelegateTokens;
    id <AXPTranslationDelegateHelper> _bridgeDelegate;
    id <AXPTranslationTokenDelegateHelper> _bridgeTokenDelegate;
    id <AXPTranslationRuntimeHelper> _runtimeDelegate;
    id <AXPTranslationSystemAppDelegate> _systemAppDelegate;
    NSMutableDictionary *_fakeElementCache;
}

@property (retain, nonatomic) NSMutableDictionary *fakeElementCache;
@property (nonatomic) _Bool supportsDelegateTokens;
@property (weak, nonatomic) id <AXPTranslationDelegateHelper> bridgeDelegate;
@property (weak, nonatomic) id <AXPTranslationTokenDelegateHelper> bridgeTokenDelegate;
@property (weak, nonatomic) id <AXPTranslationRuntimeHelper> runtimeDelegate;
@property (nonatomic) _Bool accessibilityEnabled;
@property (weak, nonatomic) id <AXPTranslationSystemAppDelegate> systemAppDelegate;

+ (id)sharedInstance;

- (id)init;
- (void)enableAccessibility;
- (CDUnknownBlockType)attributedStringConversionBlock;
- (void)initializeAXRuntimeForSystemAppServer;
- (id)processMultipleAttributeRequest:(id)arg1;
- (id)processActionRequest:(id)arg1;
- (id)processCanSetAttribute:(id)arg1;
- (id)processSetAttribute:(id)arg1;
- (id)processSupportedActions:(id)arg1;
- (id)processAttributeRequest:(id)arg1;
- (id)processFrontMostApp:(id)arg1;
- (id)processHitTest:(id)arg1;
- (id)platformElementFromTranslation:(id)arg1;
- (void)handleNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3;
- (id)_translationApplicationObjectForPidNumber:(id)arg1;
- (id)sendTranslatorRequest:(id)arg1;
- (id)platformTranslator;
- (void)_resetBridgeTokensForResponse:(id)arg1 bridgeDelegateToken:(id)arg2;
- (id)translationApplicationObject;
- (id)translationApplicationObjectForPid:(int)arg1;
- (id)frontmostApplicationWithDisplayId:(unsigned int)arg1 bridgeDelegateToken:(id)arg2;
- (id)processTranslatorRequest:(id)arg1;
- (id)objectAtPoint:(struct CGPoint)arg1 displayId:(unsigned int)arg2 bridgeDelegateToken:(id)arg3;
- (id)iosPlatformElementFromTranslation:(id)arg1;
- (void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2;

@end
