/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VSJSRequest : IKJSObject

{
    NSString *_requestType;
    NSString *_requestBody;
    NSString *_currentAuthentication;
    NSString *_appleVerificationToken;
    NSString *_requestorVerificationToken;
    NSArray *_attributeNames;
    NSDictionary *_requestorInfo;
}

@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSString *requestBody;
@property (copy, nonatomic) NSString *currentAuthentication;
@property (copy, nonatomic) NSString *appleVerificationToken;
@property (copy, nonatomic) NSString *requestorVerificationToken;
@property (copy, nonatomic) NSArray *attributeNames;
@property (copy, nonatomic) NSDictionary *requestorInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
