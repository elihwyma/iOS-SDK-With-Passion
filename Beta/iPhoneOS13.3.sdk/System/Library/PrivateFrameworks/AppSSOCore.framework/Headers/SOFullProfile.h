/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <AppSSOCore/SOProfile.h>

@class NSDictionary, NSString;

@interface SOFullProfile : SOProfile

{
    NSString *_extensionTeamIdentifier;
    NSDictionary *_extensionData;
}

@property (retain, nonatomic) NSString *extensionTeamIdentifier;
@property (retain, nonatomic) NSDictionary *extensionData;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyProfileForClient;
- (id)copyProfile;
- (id)initWithProfileData:(id)arg1;
- (void)removeURLPrefix:(id)arg1;

@end
