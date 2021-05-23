/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSXPCConnection, TIKeyboardInputManagerBase, TIKeyboardInputManagerLoaderSyncHelper;

@interface TIKeyboardInputManagerLoader : NSObject

{
    TIKeyboardInputManagerLoaderSyncHelper *_helper;
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
    NSXPCConnection *_interactingConnection;
    TIKeyboardInputManagerBase *_mostRecentlyRequested;
}

@property (retain, nonatomic) TIKeyboardInputManagerBase *mostRecentlyRequested;
@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (id)init;
- (void)dealloc;
- (id)activeInputModeIdentifiers;
- (id)resourceInputModes;
- (void)startSyncHelper;
- (id)inputManagerForInputMode:(id)arg1 withKeyboardState:(id)arg2 class:(Class)arg3;
- (void)cacheInputManager:(id)arg1;
- (void)reduceCacheToSize:(unsigned long long)arg1;
- (_Bool)hasActiveInputManagers;
- (_Bool)isActiveInputManager:(id)arg1;
- (void)jettisonAllActiveInputManagers;
- (void)registerMaintenanceActivity;

@end
