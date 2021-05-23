/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AASigningSession : NSObject

{
    struct NACContextOpaque_ *_context;
    NSString *_certURL;
    NSString *_sessionURL;
    int _error;
}

@property (nonatomic, readonly) int error;

+ (id)establishedSessionWithCertURL:(id)arg1 sessionURL:(id)arg2 error:(id *)arg3;
+ (id)_badURLError;

- (void)dealloc;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;
- (void)establishSession;
- (id)signatureForData:(id)arg1;

@end
