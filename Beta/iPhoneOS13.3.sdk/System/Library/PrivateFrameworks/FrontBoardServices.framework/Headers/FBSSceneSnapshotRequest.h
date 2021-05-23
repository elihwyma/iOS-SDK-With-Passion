/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSSceneSettings, NSString;

@protocol FBSSceneSnapshotRequestDelegate;

@interface FBSSceneSnapshotRequest : NSObject

{
    NSString *_sceneID;
    FBSSceneSettings *_settings;
    _Bool _handled;
    id <FBSSceneSnapshotRequestDelegate> _delegate;
    _Bool _allowsProtectedContent;
}

@property (copy, nonatomic) NSString *sceneID;
@property (weak, nonatomic) id <FBSSceneSnapshotRequestDelegate> delegate;
@property (copy, nonatomic, readonly) FBSSceneSettings *settings;
@property (nonatomic, readonly) _Bool allowsProtectedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithSettings:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (_Bool)performSnapshotWithContext:(id)arg1;
- (id)initWithSettings:(id)arg1 allowsProtectedContent:(_Bool)arg2;

@end
