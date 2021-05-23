/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/Swift-Protocol.h>

@class NSNumber, NSString, NSUUID;

@protocol VMTelephonySubscription <Swift>

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *labelID;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSNumber *userDataPreferred;
@property (nonatomic, readonly) NSNumber *userDefaultVoice;
@property (nonatomic, readonly) NSString *vm_isoCountryCode;
@property (nonatomic, readonly) NSUUID *vm_labelUUID;
@property (nonatomic, readonly) NSString *vm_telephoneNumber;

@end
