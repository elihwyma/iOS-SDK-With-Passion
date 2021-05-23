/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface CKComponentDataSourceAttachState : NSObject

{
    struct CKComponentLayout _layout;
    int _scopeIdentifier;
    NSSet *_mountedComponents;
}

@property (nonatomic, readonly) NSSet *mountedComponents;
@property (nonatomic, readonly) int scopeIdentifier;

- (id).cxx_construct;
- (const struct CKComponentLayout *)layout;
- (id)initWithScopeIdentifier:(int)arg1 mountedComponents:(id)arg2 layout:(const struct CKComponentLayout *)arg3;

@end
