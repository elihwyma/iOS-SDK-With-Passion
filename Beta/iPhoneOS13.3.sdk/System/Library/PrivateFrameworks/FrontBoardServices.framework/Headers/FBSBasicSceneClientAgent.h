/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSBasicSceneAgent.h>

@class NSString;

@interface FBSBasicSceneClientAgent : FBSBasicSceneAgent

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scene:(id)arg1 didInitializeWithEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 willInvalidateWithEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 handleEvent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
