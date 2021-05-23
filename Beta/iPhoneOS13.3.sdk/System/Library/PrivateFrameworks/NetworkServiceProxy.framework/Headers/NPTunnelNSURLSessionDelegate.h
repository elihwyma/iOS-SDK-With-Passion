/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NPTunnelNSURLSessionDelegate : NSObject

{
    _Bool _enableExtendedValidation;
    _Bool _ignoreInvalidCerts;
    _Bool _revocationFailClosed;
    NSString *_validationHostname;
    NSString *_leafOID;
}

@property (retain) NSString *validationHostname;
@property _Bool enableExtendedValidation;
@property _Bool ignoreInvalidCerts;
@property (retain) NSString *leafOID;
@property _Bool revocationFailClosed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
