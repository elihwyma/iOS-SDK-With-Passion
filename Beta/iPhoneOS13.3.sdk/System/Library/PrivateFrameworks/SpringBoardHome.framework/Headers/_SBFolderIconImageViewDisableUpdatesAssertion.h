/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, SBFolderIconImageView;

@interface _SBFolderIconImageViewDisableUpdatesAssertion : NSObject

{
    _Bool _invalidated;
    SBFolderIconImageView *_folderIconImageView;
    NSString *_reason;
}

@property (weak, nonatomic, readonly) SBFolderIconImageView *folderIconImageView;
@property (copy, nonatomic, readonly) NSString *reason;
@property (nonatomic, getter=isInvalidated) _Bool invalidated;
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
- (id)initWithFolderIconImageView:(id)arg1 reason:(id)arg2;

@end
