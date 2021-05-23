/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, PocketAPI;

@protocol PocketAPIDelegate;

@interface PocketAPILogin : NSObject

{
    PocketAPI *API;
    NSString *uuid;
    NSString *requestToken;
    NSString *accessToken;
    NSOperationQueue *operationQueue;
    id <PocketAPIDelegate> delegate;
    _Bool didStart;
    _Bool didFinish;
    _Bool reverseAuth;
}

@property (retain, nonatomic, readonly) PocketAPI *API;
@property (retain, nonatomic, readonly) NSString *uuid;
@property (retain, nonatomic, readonly) NSString *requestToken;
@property (retain, nonatomic, readonly) NSString *accessToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)redirectURL;
- (void)fetchRequestToken;
- (void)pocketAPI:(id)arg1 receivedRequestToken:(id)arg2;
- (void)pocketAPILoggedIn:(id)arg1;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)_setRequestToken:(id)arg1;
- (void)_setReverseAuth:(_Bool)arg1;
- (id)initWithAPI:(id)arg1 delegate:(id)arg2;
- (void)convertRequestTokenToAccessToken;
- (void)loginDidStart;
- (void)loginDidFinish:(_Bool)arg1;

@end
