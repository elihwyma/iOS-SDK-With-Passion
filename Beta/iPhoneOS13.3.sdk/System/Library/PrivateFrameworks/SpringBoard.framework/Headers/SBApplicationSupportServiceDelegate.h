/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, UISApplicationSupportService;

@interface SBApplicationSupportServiceDelegate : NSObject

{
    UISApplicationSupportService *_service;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)service:(id)arg1 overrideClientInitialization:(id)arg2;
- (id)service:(id)arg1 initializeClient:(id)arg2;
- (void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(_Bool)arg3 forClient:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_rebuildDefaultContext;

@end
