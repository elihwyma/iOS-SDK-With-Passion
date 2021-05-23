/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBProximitySensorManager, SBSceneManager;

@interface SBFaceContactExpectationManager : NSObject

{
    SBSceneManager *_sceneManager;
    SBProximitySensorManager *_proximitySensorManager;
    _Bool _faceExpected;
}

- (id)description;
- (id)initWithSceneManager:(id)arg1;
- (void)updateFaceContactExpectation;
- (id)initWithSceneManager:(id)arg1 proximitySensorManager:(id)arg2;
- (id)_frontmostScenesExpectingFaceContact;
- (id)_proximitySensorClientID;

@end
