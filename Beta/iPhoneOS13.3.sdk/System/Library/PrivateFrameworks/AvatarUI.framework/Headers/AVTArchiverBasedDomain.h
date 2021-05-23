/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTArchiverBasedDomain : NSObject

{
    NSString *_domainIdentifier;
    NSString *_primaryAvatarIdentifier;
}

@property (copy, nonatomic, readonly) NSString *domainIdentifier;
@property (copy, nonatomic, readonly) NSString *primaryAvatarIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainIdentifier:(id)arg1 primaryAvatarIdentifier:(id)arg2;
- (id)domainBySettingPrimaryAvatarIdentifier:(id)arg1;

@end
