/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSSet, NSString;

@interface FLHSA2LoginNotification : NSObject

{
    _Bool _userAllowedSignIn;
    NSString *_title;
    NSString *_informativeText;
    NSString *_codePrompt;
    NSString *_approveButtonTitle;
    NSString *_dismissButtonTitle;
    NSSet *_supportedDismissActions;
    NSString *_appleID;
    NSString *_altDSID;
    NSNumber *_longitude;
    NSNumber *_latitude;
    NSString *_deviceType;
    NSString *_deviceModel;
    NSString *_deviceColorString;
    NSString *_pushMessageID;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *codePrompt;
@property (copy, nonatomic) NSString *approveButtonTitle;
@property (copy, nonatomic) NSString *dismissButtonTitle;
@property (copy, nonatomic) NSSet *supportedDismissActions;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *deviceColorString;
@property (copy, nonatomic) NSString *pushMessageID;
@property (nonatomic) _Bool userAllowedSignIn;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFollowUpItemUserInfo:(id)arg1;
- (id)followUpItemUserInfo;

@end
