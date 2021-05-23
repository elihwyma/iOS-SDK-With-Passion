/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class AXSSActionManager, AXSSKeyboardCommandInfo, AXSSKeyboardCommandMap, NSDictionary;

@protocol AXSSKeyFilterDelegate;

@interface AXSSEventManager : NSObject

{
    _Bool __tabKeyPressed;
    _Bool __performedActionWhileTabComboPressed;
    AXSSActionManager *_actionManager;
    unsigned long long _searchType;
    AXSSKeyboardCommandMap *_commandMap;
    id <AXSSKeyFilterDelegate> _filterDelegate;
    NSDictionary *__commandInfos;
    double __lastTabPressTime;
    AXSSKeyboardCommandInfo *__lastDownAndUpCommandInfo;
}

@property (nonatomic, readonly) NSDictionary *_commandInfos;
@property (nonatomic) _Bool _tabKeyPressed;
@property (nonatomic) _Bool _performedActionWhileTabComboPressed;
@property (nonatomic) double _lastTabPressTime;
@property (retain, nonatomic) AXSSKeyboardCommandInfo *_lastDownAndUpCommandInfo;
@property (retain, nonatomic) AXSSActionManager *actionManager;
@property (nonatomic) unsigned long long searchType;
@property (retain, nonatomic) AXSSKeyboardCommandMap *commandMap;
@property (weak, nonatomic) id <AXSSKeyFilterDelegate> filterDelegate;

- (id)initWithActionManager:(id)arg1 commandMap:(id)arg2;
- (_Bool)processKeyboardEvent:(id)arg1 forCaptureOnly:(_Bool)arg2;
- (_Bool)shouldCaptureEvent:(id)arg1;
- (void)handleFKAEvent:(id)arg1;
- (_Bool)_shouldCaptureCommand:(id)arg1;
- (void)_handleTabEvent:(id)arg1;
- (void)_handleTabComboEvent:(id)arg1;
- (_Bool)_handleCommand:(id)arg1 event:(id)arg2;
- (_Bool)_handleEvent:(id)arg1 forCaptureOnly:(_Bool)arg2;
- (void)_handleTabRepeatOrUpWithCommand:(id)arg1;
- (void)_performDownActionForInfo:(id)arg1;
- (id)initWithActionManager:(id)arg1;
- (_Bool)processKeyboardEvent:(id)arg1;

@end
