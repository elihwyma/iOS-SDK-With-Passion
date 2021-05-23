/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AAStorableLoginContext : NSObject

{
    NSString *_appleID;
    NSString *_altDSID;
    NSString *_DSID;
    NSString *_rawPassword;
    NSString *_continuationKey;
    NSString *_passwordResetKey;
    NSString *_cloudKitToken;
}

@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) NSString *altDSID;
@property (copy, nonatomic) NSString *DSID;
@property (copy, nonatomic) NSString *rawPassword;
@property (copy, nonatomic) NSString *continuationKey;
@property (copy, nonatomic) NSString *passwordResetKey;
@property (copy, nonatomic) NSString *cloudKitToken;

- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;

@end
