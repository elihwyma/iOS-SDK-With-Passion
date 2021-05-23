/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBServiceClientAuthenticator, NSString;

@interface SBSoftwareUpdateService : NSObject

{
    FBServiceClientAuthenticator *_serviceClientSoftwareUpdatePasscodePolicyEntitlementAuthenticator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setPasscodePolicy:(long long)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 passcodePolicy:(CDUnknownBlockType)arg3;

@end
