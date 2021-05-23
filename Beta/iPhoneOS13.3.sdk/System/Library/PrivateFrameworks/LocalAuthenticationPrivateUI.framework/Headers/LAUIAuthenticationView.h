/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <UIKit/UIView.h>

@class LAPKGlyphWrapper, LAUIAuthenticationCore, NSString;

@protocol LAUIAuthenticationDelegate;

@interface LAUIAuthenticationView : UIView

{
    _Bool _idleWhenDone;
    _Bool _fastAnimations;
    id <LAUIAuthenticationDelegate> _delegate;
    long long _glyphStyle;
    long long _style;
    LAUIAuthenticationCore *_authenticationCore;
    LAPKGlyphWrapper *_glyphWrapper;
}

@property (nonatomic, readonly) LAUIAuthenticationCore *authenticationCore;
@property (nonatomic, readonly) LAPKGlyphWrapper *glyphWrapper;
@property (weak, nonatomic) id <LAUIAuthenticationDelegate> delegate;
@property (nonatomic) long long glyphStyle;
@property (nonatomic) long long style;
@property (nonatomic) _Bool idleWhenDone;
@property (nonatomic) _Bool fastAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGRect)defaultRect;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)willMoveToSuperview:(id)arg1;
- (id)localizedCallerName;
- (void)_setupView;
- (_Bool)disableMechanism:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)enableMechanism:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithFrame:(struct CGRect)arg1 mechanisms:(unsigned long long)arg2;
- (void)authenticationResult:(id)arg1 error:(id)arg2 context:(id)arg3;
- (void)biometricNoMatch;
- (id)callerIconBundlePath;
- (void)_setupMechanisms:(unsigned long long)arg1;
- (id)initWithMechanisms:(unsigned long long)arg1;
- (_Bool)isMechanismAvailable:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)isMechanismEnabled:(unsigned long long)arg1;
- (_Bool)isMechanismActive:(unsigned long long)arg1;
- (void)tappedFaceID:(id)arg1;
- (void)notification:(long long)arg1 original:(id)arg2 mechanism:(unsigned long long)arg3;
- (void)biometryState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
