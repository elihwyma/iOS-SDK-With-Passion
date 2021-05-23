/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol FPUIActionControllerDelegate;

@interface FPUIActionController : NSObject

{
    NSString *_domainIdentifier;
    NSString *_actionIdentifier;
    NSArray *_items;
    NSString *_providerIdentifier;
    id <FPUIActionControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <FPUIActionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *providerIdentifier;
@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *domainIdentifier;

+ (id)actionControllerForActionIdentifier:(id)arg1 actionTitle:(id)arg2 items:(id)arg3 providerIdentifier:(id)arg4 domainIdentifier:(id)arg5;

- (id)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_getExtensionWithError:(id *)arg1;
- (void)_delegateError:(id)arg1;
- (void)_delegateDidFinishWithUserInfo:(id)arg1 error:(id)arg2;
- (void)remoteActionContextDidFinishAction:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)remoteActionContext:(id)arg1 didEncounterError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
