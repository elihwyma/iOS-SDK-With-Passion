/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBSystemShellInitializationOptions;

@interface FBSystemShellInitializationContext : NSObject

{
    FBSystemShellInitializationOptions *_options;
    _Bool _bootedDark;
}

@property (nonatomic, readonly) FBSystemShellInitializationOptions *options;
@property (nonatomic, readonly) unsigned long long lastExitReason;
@property (nonatomic, readonly, getter=wasBootedDark) _Bool bootedDark;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithOptions:(id)arg1;
- (_Bool)_optsIntoUIKitWindowHosting;
- (_Bool)_disablesUIKitWindowImplicitScenes;

@end
