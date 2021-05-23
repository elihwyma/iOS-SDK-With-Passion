/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSArray, NSError, NSURLCredential, NSURLProtectionSpace, NSURLResponse;

@protocol NSURLAuthenticationChallengeSender;

@interface NSURLAuthenticationChallengeInternal : NSObject

{
    NSURLProtectionSpace *space;
    NSURLCredential *proposedCredential;
    long long previousFailureCount;
    NSURLResponse *failureResponse;
    NSError *error;
    id <NSURLAuthenticationChallengeSender> sender;
    NSArray *protectionSpacesForChallenge;
    long long preferredProtSpaceIndex;
}

- (void)dealloc;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;

@end
