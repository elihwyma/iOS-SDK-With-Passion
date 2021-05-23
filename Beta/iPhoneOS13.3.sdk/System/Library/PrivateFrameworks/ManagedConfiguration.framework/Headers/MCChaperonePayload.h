/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSNumber;

@interface MCChaperonePayload : MCPayload

{
    NSData *_pairingCertificateData;
    _Bool _nonChaperonePairingAllowed;
    NSNumber *_nonChaperonePairingAllowedNum;
}

@property (nonatomic, readonly) NSNumber *nonChaperonePairingAllowedNum;
@property (retain, nonatomic, readonly) NSData *pairingCertificateData;
@property (nonatomic, readonly) _Bool nonChaperonePairingAllowed;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
