/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSApplicationControllerRequest : NSObject

{
    long long _type;
    NSString *_authenticationToken;
    NSString *_SAMLRequest;
    NSArray *_attributeNames;
    NSString *_requestorVerificationToken;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *authenticationToken;
@property (copy, nonatomic) NSString *SAMLRequest;
@property (copy, nonatomic) NSArray *attributeNames;
@property (copy, nonatomic) NSString *requestorVerificationToken;

@end
