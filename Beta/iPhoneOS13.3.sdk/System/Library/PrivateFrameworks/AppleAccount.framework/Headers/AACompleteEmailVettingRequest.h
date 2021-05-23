/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAEmailVettingRequest.h>

@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest

{
    NSString *_token;
}

+ (Class)responseClass;

- (id)urlString;
- (id)bodyDictionary;
- (id)initWithAccount:(id)arg1 token:(id)arg2;
- (id)initWithURLString:(id)arg1 account:(id)arg2 token:(id)arg3;

@end
