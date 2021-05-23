/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, VCVoiceShortcutClient;

@protocol OS_dispatch_queue;

@interface AXSiriShortcutsManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_shortcuts;
    NSMutableDictionary *_updateBlocks;
    int _contentProtectionNotifyToken;
    CDUnknownBlockType _siriShortcutsDidChangeBlock;
    VCVoiceShortcutClient *_shortcutClient;
}

@property (retain, nonatomic) VCVoiceShortcutClient *shortcutClient;
@property (nonatomic, readonly) NSArray *shortcuts;
@property (copy, nonatomic) CDUnknownBlockType siriShortcutsDidChangeBlock;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)handleVoiceShortcutClientDataUpdateNotification:(id)arg1;
- (void)_loadShortcuts;
- (id)registerShortcutsDidChangeBlock:(CDUnknownBlockType)arg1;
- (void)unregisterShortcutsDidChangeBlock:(id)arg1;
- (id)shortcutForIdentifier:(id)arg1;
- (void)performShortcut:(id)arg1;

@end
