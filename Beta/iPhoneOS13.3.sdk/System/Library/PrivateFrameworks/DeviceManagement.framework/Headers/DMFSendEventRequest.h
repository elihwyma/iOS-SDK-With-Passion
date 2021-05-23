/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSDictionary, NSString;

@interface DMFSendEventRequest

{
    NSString *_organizationIdentifier;
    NSString *_inReplyTo;
    NSString *_eventType;
    NSDictionary *_details;
}

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *inReplyTo;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSDictionary *details;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
