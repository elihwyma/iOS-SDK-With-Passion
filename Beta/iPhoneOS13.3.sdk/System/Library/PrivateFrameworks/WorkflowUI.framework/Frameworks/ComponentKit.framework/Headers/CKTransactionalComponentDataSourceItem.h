/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKComponentScopeRoot;

@interface CKTransactionalComponentDataSourceItem : NSObject

{
    struct CKComponentLayout _layout;
    id _model;
    CKComponentScopeRoot *_scopeRoot;
    struct CKComponentBoundsAnimation _boundsAnimation;
}

@property (nonatomic, readonly) id model;
@property (nonatomic, readonly) CKComponentScopeRoot *scopeRoot;
@property (nonatomic, readonly) struct CKComponentBoundsAnimation boundsAnimation;

- (id).cxx_construct;
- (const struct CKComponentLayout *)layout;
- (id)initWithLayout:(const struct CKComponentLayout *)arg1 model:(id)arg2 scopeRoot:(id)arg3 boundsAnimation:(struct CKComponentBoundsAnimation)arg4;

@end
