/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

#import <Social/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface SLFacebookPostPrivacySetting : NSObject <Swift>

{
    int _type;
    NSString *_identifier;
    NSString *_name;
    NSDictionary *_parameters;
}

@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (retain) NSDictionary *parameters;
@property int type;

+ (_Bool)supportsSecureCoding;
+ (id)postPrivacySettingWithIdentifier:(id)arg1 name:(id)arg2 type:(int)arg3 parameters:(id)arg4;
+ (id)postPrivacySettingsForPrivacyOptions:(id)arg1;
+ (int)_privacySettingTypeFromTypeIdentifier:(id)arg1;
+ (id)postPrivacySettingForPrivacyOptionDictionary:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_parametersJSONStringRepresentation;
- (id)parametersFormValueString;

@end
