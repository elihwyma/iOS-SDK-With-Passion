/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class CNContact;

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse

{
    CNContact *_userInfo;
}

@property (nonatomic, readonly) CNContact *userInfo;

- (id)initWithData:(id)arg1;
- (id)_stringValueFromDictionary:(id)arg1 key:(id)arg2 isOptional:(_Bool)arg3;

@end
