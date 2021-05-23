/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSAuthenticateResult, AMSDialogResult, NSDictionary, NSError, NSString, NSURL;

@interface AMSURLAction : NSObject

{
    long long _actionType;
    NSError *_error;
    NSString *_reason;
    NSURL *_redirectURL;
    AMSAuthenticateResult *_authenticateResult;
    AMSDialogResult *_dialogResult;
    NSDictionary *_updatedHeaders;
}

@property (retain, nonatomic) AMSAuthenticateResult *authenticateResult;
@property (retain, nonatomic) AMSDialogResult *dialogResult;
@property (retain, nonatomic) NSDictionary *updatedHeaders;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) NSError *error;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic, readonly) NSURL *redirectURL;

+ (id)actionWithError:(id)arg1;
+ (id)redirectActionWithURL:(id)arg1;
+ (id)retryAction;
+ (id)proceedAction;

- (id)description;
- (id)initWithType:(long long)arg1;

@end
