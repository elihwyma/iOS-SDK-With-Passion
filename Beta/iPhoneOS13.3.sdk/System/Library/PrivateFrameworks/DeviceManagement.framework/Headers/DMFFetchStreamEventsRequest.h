/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSArray, NSDate, NSString;

@interface DMFFetchStreamEventsRequest

{
    NSString *_organizationIdentifier;
    NSArray *_eventIdentifiers;
    NSDate *_startDate;
}

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSArray *eventIdentifiers;
@property (retain, nonatomic) NSDate *startDate;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
