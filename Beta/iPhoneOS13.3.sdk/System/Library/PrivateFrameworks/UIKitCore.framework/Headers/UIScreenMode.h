/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class FBSDisplayMode;

@interface UIScreenMode : NSObject

{
    FBSDisplayMode *_mode;
    _Bool _mainScreen;
}

@property (getter=_isMainScreen, setter=_setMainScreen:) _Bool _mainScreen;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double pixelAspectRatio;

+ (id)_screenModeForDisplayMode:(id)arg1 mainScreen:(_Bool)arg2;

- (id)description;
- (id)_displayMode;
- (id)initWithDisplayMode:(id)arg1 mainScreen:(_Bool)arg2;
- (struct CGSize)_sizeWithLevel:(unsigned long long)arg1;

@end
