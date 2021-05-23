/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class NSString, SOServiceConnection;

__attribute__((visibility("hidden")))
@interface SOClient : NSObject

{
    SOServiceConnection *_serviceConnection;
}

@property (retain) SOServiceConnection *serviceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_queue;

- (id)init;
- (void)configurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)debugHintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)realmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)isExtensionProcessWithAuditToken:(CDStruct_6ad76789)arg1 completion:(CDUnknownBlockType)arg2;

@end
