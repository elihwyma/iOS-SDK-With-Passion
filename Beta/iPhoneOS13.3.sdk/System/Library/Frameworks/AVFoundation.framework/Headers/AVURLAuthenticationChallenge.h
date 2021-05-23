/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <CFNetwork/NSURLAuthenticationChallenge.h>

@class AVWeakReference, NSString;

__attribute__((visibility("hidden")))
@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge

{
    AVWeakReference *_weakReference;
    unsigned long long _requestID;
    struct __CFDictionary *_requestInfo;
}

@property (nonatomic, readonly) unsigned long long _requestID;
@property (nonatomic, readonly) struct __CFDictionary *_requestInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (id)init;
- (void)dealloc;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)_weakReference;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestInfo:(struct __CFDictionary *)arg3 requestID:(unsigned long long)arg4;
- (void)_performCancellationByClient;
- (_Bool)_shouldInformDelegateOfFigCancellation;

@end
