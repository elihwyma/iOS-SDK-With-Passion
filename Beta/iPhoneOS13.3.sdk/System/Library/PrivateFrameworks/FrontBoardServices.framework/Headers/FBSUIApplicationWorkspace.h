/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSWorkspace.h>

@protocol FBSUIApplicationWorkspaceDelegate;

@interface FBSUIApplicationWorkspace : FBSWorkspace

@property (nonatomic, readonly) id <FBSUIApplicationWorkspaceDelegate> delegate;

- (void)setDelegate:(id)arg1;
- (id)initWithSerialQueue:(id)arg1;

@end
