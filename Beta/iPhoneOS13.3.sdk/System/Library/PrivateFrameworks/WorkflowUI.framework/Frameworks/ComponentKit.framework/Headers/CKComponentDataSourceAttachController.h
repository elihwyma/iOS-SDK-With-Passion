/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CKComponentDataSourceAttachController : NSObject

{
    NSMutableDictionary *_scopeIdentifierToAttachedViewMap;
}

- (id)init;
- (void)dealloc;
- (void)attachComponentLayout:(struct CKComponentLayout)arg1 withScopeIdentifier:(int)arg2 withBoundsAnimation:(struct CKComponentBoundsAnimation)arg3 toView:(id)arg4;
- (void)detachComponentLayoutWithScopeIdentifier:(int)arg1;
- (id)attachStateForScopeIdentifier:(int)arg1;
- (void)_detachComponentLayoutFromView:(id)arg1;

@end
