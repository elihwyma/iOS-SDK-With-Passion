/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class FBSScene, NSString;

@interface _UIContextBinderSubstrate : NSObject

{
    FBSScene *_scene;
}

@property (nonatomic, readonly) FBSScene *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithScene:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;

@end
