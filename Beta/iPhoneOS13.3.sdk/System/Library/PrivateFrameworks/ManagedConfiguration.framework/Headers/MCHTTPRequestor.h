/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MCHTTPRequestor : NSObject

{
    _Bool _didFailDueToMissingCredentials;
    NSString *_username;
    NSString *_password;
    NSArray *_anchorCertificates;
    id _selfReference;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSArray *anchorCertificates;
@property (retain, nonatomic) id selfReference;
@property (nonatomic) _Bool didFailDueToMissingCredentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
