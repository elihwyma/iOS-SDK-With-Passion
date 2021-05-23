/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKCloudUser : NSObject

{
    _Bool _managedAppleID;
    _Bool _HSA2;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, getter=isManagedAppleID) _Bool managedAppleID;
@property (nonatomic, getter=isHSA2) _Bool HSA2;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCloudUser:(id)arg1;
- (id)initWithIdentifier:(id)arg1 isManagedAppleID:(_Bool)arg2 isHSA2:(_Bool)arg3;
- (_Bool)representsSameUserAsUser:(id)arg1;

@end
