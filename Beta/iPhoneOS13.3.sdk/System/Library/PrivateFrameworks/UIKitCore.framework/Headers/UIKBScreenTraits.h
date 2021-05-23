/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIScreen;

@interface UIKBScreenTraits : NSObject

{
    _Bool _knobInput;
    _Bool _touchInput;
    _Bool _touchpadInput;
    _Bool _isKeyboardMinorEdgeWidth;
    UIScreen *_screen;
    long long _orientation;
    double _keyboardWidth;
    double _keyboardBarHeight;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) _Bool knobInput;
@property (nonatomic, readonly) _Bool touchInput;
@property (nonatomic, readonly) _Bool touchpadInput;
@property (nonatomic) long long orientation;
@property (nonatomic) double keyboardWidth;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic, readonly) _Bool isKeyboardMinorEdgeWidth;
@property (nonatomic) double keyboardBarHeight;

+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2;
+ (id)fullScreenTraitsWithScreen:(id)arg1 orientation:(long long)arg2;
+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2 ignoreRemoteKeyboard:(_Bool)arg3;

- (id)description;
- (void)updateForTextInputTraits:(id)arg1 supportedInteractionModel:(unsigned long long)arg2;
- (id)initWithScreen:(id)arg1 orientation:(long long)arg2 allowFloating:(_Bool)arg3 ignoreRemoteKeyboard:(_Bool)arg4;

@end
