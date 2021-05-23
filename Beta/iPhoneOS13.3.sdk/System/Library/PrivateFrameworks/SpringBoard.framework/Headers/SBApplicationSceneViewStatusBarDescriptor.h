/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBApplicationSceneViewStatusBarDescriptor : NSObject

{
    _Bool _forceHidden;
}

@property (nonatomic, getter=isForcedHidden) _Bool forceHidden;

+ (id)statusBarDescriptorWithForceHidden:(_Bool)arg1;

- (id)debugDescription;
- (id)initWithForceHidden:(_Bool)arg1;

@end
