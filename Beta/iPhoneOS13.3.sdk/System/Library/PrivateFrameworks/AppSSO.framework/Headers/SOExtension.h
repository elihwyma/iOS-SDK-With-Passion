/*
 Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

#import <Foundation/NSObject.h>

@class NSArray, NSExtension, NSString, NSUUID, SORemoteExtensionViewController;

@protocol OS_dispatch_queue, SOExtensionDelegate;

@interface SOExtension : NSObject

{
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_queue;
    SORemoteExtensionViewController *_remoteViewController;
    NSExtension *_extension;
    NSArray *_associatedDomains;
    id <SOExtensionDelegate> _extensionDelegate;
}

@property (retain, nonatomic) NSExtension *extension;
@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) NSString *localizedExtensionDisplayName;
@property (nonatomic, readonly) NSString *containerAppPath;
@property (nonatomic, readonly) NSString *containerAppBundleIdentifier;
@property (retain, nonatomic) NSArray *associatedDomains;
@property (weak, nonatomic) id <SOExtensionDelegate> extensionDelegate;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)unload;
- (_Bool)isEqualToExtension:(id)arg1;
- (id)initWithExtension:(id)arg1;
- (void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupExtension;
- (void)_setupSessionIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_contextForSession;
- (void)_setupSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupSessionHelperForIOSWithCompletion:(CDUnknownBlockType)arg1;
- (void)_connectContextToSessionWithRequestIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finishedSettingUpSession:(id)arg1;
- (CDStruct_6ad76789)auditTokenForSession;
- (void)checkAssociatedDomains;
- (_Bool)hasURLApprovedAssociatedDomain:(id)arg1;

@end
