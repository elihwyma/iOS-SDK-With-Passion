/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class BSProcessHandle, NSString;

@interface SBSRemoteAlertPresentationTarget : NSObject

{
    _Bool _shouldDismissOnUILock;
    BSProcessHandle *_targetProcess;
}

@property (nonatomic, readonly) BSProcessHandle *targetProcess;
@property (nonatomic) _Bool shouldDismissOnUILock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithTargetProcess:(id)arg1;

@end
