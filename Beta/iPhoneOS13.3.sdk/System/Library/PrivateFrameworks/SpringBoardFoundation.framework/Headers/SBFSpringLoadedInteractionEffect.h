/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SBFSpringLoadedInteractionEffectDelegate, UISpringLoadedInteractionEffect;

@interface SBFSpringLoadedInteractionEffect : NSObject

{
    id <UISpringLoadedInteractionEffect> _blinkEffect;
    _Bool _useFastBlinkAnimation;
    id <SBFSpringLoadedInteractionEffectDelegate> _delegate;
}

@property (nonatomic) _Bool useFastBlinkAnimation;
@property (weak, nonatomic) id <SBFSpringLoadedInteractionEffectDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)fastBlinkAnimation;

@end
