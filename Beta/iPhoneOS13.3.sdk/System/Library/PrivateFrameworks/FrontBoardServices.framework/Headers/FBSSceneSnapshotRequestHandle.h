/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSSceneSnapshotContext, FBSSceneSnapshotRequestAction;

@interface FBSSceneSnapshotRequestHandle : NSObject

{
    unsigned long long _type;
    FBSSceneSnapshotContext *_context;
    FBSSceneSnapshotRequestAction *_action;
    _Bool _canceled;
}

+ (id)handleForRequestType:(unsigned long long)arg1 context:(id)arg2;

- (void)performRequestForScene:(id)arg1;
- (id)initWithRequestType:(unsigned long long)arg1 context:(id)arg2;
- (void)_clearAction;
- (void)cancelRequest;

@end
