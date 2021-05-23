/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCAirPlaySecurityPayload : MCPayload

{
    NSString *_accessType;
    NSString *_securityType;
    NSString *_password;
}

@property (retain, nonatomic) NSString *accessType;
@property (retain, nonatomic) NSString *securityType;
@property (retain, nonatomic) NSString *password;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
