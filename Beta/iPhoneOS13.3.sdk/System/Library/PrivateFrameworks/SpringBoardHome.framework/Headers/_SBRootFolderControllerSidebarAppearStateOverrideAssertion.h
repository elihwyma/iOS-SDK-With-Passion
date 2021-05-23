/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, SBRootFolderController;

@interface _SBRootFolderControllerSidebarAppearStateOverrideAssertion : NSObject

{
    _Bool _invalidated;
    NSString *_reason;
    SBRootFolderController *_rootFolderController;
}

@property (weak, nonatomic, readonly) SBRootFolderController *rootFolderController;
@property (nonatomic, getter=isInvalidated) _Bool invalidated;
@property (copy, nonatomic, readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithRootFolderController:(id)arg1 reason:(id)arg2;

@end
