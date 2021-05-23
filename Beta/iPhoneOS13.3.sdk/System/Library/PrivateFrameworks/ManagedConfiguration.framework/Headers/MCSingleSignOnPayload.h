/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class MCSingleSignOnPayloadKerberosInfo, NSString;

@interface MCSingleSignOnPayload : MCPayload

{
    NSString *_humanReadableName;
    MCSingleSignOnPayloadKerberosInfo *_kerberosInfo;
}

@property (retain, nonatomic) NSString *humanReadableName;
@property (retain, nonatomic) MCSingleSignOnPayloadKerberosInfo *kerberosInfo;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;

@end
