/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface _AFSiriClientState : NSObject

{
    NSMutableSet *_requestUUIDs;
    _Bool _hasActiveSession;
    _Bool _isListening;
    _Bool _isSpeaking;
}

@property (nonatomic) _Bool hasActiveSession;
@property (nonatomic) _Bool isListening;
@property (nonatomic) _Bool isSpeaking;
@property (nonatomic, readonly) unsigned long long notifyState;

- (id)init;
- (void)addRequestUUID:(id)arg1;
- (void)removeRequestUUID:(id)arg1;

@end
