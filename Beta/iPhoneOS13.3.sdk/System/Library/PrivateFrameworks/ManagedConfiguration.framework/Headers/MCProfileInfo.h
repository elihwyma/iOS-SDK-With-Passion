/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface MCProfileInfo : NSObject

{
    NSString *_friendlyName;
    NSString *_profileDescription;
    NSString *_identifier;
    NSString *_UUID;
    NSString *_organization;
    NSDate *_expiryDate;
}

@property (retain, nonatomic) NSString *friendlyName;
@property (retain, nonatomic) NSString *profileDescription;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSString *organization;
@property (retain, nonatomic) NSDate *expiryDate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1;

@end
