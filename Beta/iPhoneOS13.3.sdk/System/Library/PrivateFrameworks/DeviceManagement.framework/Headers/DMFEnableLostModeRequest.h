/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFEnableLostModeRequest

{
    NSString *_message;
    NSString *_phoneNumber;
    NSString *_footnote;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *footnote;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
