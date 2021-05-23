/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <FrontBoardServices/FBSWorkspaceSceneRequestOptions.h>

@class NSSet, NSString;

@interface UISceneRequestOptions : FBSWorkspaceSceneRequestOptions

{
    _Bool _requestFullscreen;
    _Bool _requestBackground;
    _Bool _preserveLayout;
    NSString *_sourceIdentifier;
    NSSet *_actions;
}

@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSSet *actions;
@property (nonatomic) _Bool requestFullscreen;
@property (nonatomic) _Bool requestBackground;
@property (nonatomic) _Bool preserveLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

@end
