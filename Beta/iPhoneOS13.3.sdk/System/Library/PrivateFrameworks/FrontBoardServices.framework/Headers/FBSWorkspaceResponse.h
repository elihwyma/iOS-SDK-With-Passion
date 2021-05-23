/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSAnimationFenceHandle, FBSSceneMessage, NSString;

@interface FBSWorkspaceResponse : NSObject

{
    FBSSceneMessage *_message;
    BKSAnimationFenceHandle *_animationFence;
}

@property (retain, nonatomic) BKSAnimationFenceHandle *animationFence;
@property (copy, nonatomic) FBSSceneMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
