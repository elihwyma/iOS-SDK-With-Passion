/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@protocol SBSceneHandleObserver;

@interface _SBSceneHandleObserverBehavior : NSObject

{
    _Bool _didCreateScene;
    _Bool _didDestroyScene;
    _Bool _didUpdateContentState;
    _Bool _didUpdateSettingsWithDiff;
    _Bool _didUpdateClientSettingsWithDiff;
    _Bool _didUpdatePairingStatusForExternalSceneIdentifiers;
    id <SBSceneHandleObserver> _observer;
}

@property (weak, nonatomic, readonly) id <SBSceneHandleObserver> observer;
@property (nonatomic) _Bool didCreateScene;
@property (nonatomic) _Bool didDestroyScene;
@property (nonatomic) _Bool didUpdateContentState;
@property (nonatomic) _Bool didUpdateSettingsWithDiff;
@property (nonatomic) _Bool didUpdateClientSettingsWithDiff;
@property (nonatomic) _Bool didUpdatePairingStatusForExternalSceneIdentifiers;

+ (id)behaviorFromObserver:(id)arg1;

- (id)initWithObserver:(id)arg1;

@end
