/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSSet;

@interface NSURLSessionTaskHTTPAuthenticator : NSObject <Swift>

{
    NSSet *_statusCodes;
}

@property (copy) NSSet *statusCodes;

+ (id)sessionTaskHTTPAuthenticatorWithContext:(id)arg1 statusCodes:(id)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithStatusCodes:(id)arg1;

@end
