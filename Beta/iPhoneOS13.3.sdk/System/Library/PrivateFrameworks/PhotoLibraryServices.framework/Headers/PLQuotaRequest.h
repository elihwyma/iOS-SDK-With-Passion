/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <AppleAccount/AARequest.h>

@class NSString;

@interface PLQuotaRequest : AARequest

{
    NSString *_authToken;
    NSString *_personID;
}

- (id)initWithURLString:(id)arg1 authToken:(id)arg2 personID:(id)arg3;

@end
