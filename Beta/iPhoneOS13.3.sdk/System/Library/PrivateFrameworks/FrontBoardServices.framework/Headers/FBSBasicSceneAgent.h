/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSString;

@protocol FBSSceneHandle;

@interface FBSBasicSceneAgent : NSObject <Swift>

{
    id <FBSSceneHandle> _scene;
}

@property (weak, nonatomic, readonly) id <FBSSceneHandle> scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)scene:(id)arg1 reviewEvent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_configureWithScene:(id)arg1;
- (void)didReceiveMessage:(id)arg1 fromCounterpartAgent:(id)arg2 withResponseSender:(CDUnknownBlockType)arg3;

@end
