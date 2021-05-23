/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSHashTable, UIColor;

@interface CLKComplicationTemplate : NSObject

{
    NSDictionary *_metadata;
    NSHashTable *_activeClients;
    _Bool _finalized;
    _Bool _linkedOnOrAfterGrace;
    UIColor *_tintColor;
    long long _uiSensitivity;
}

@property (nonatomic, readonly) long long timeTravelUpdateFrequency;
@property (nonatomic, readonly, getter=isLinkedOnOrAfterGrace) _Bool linkedOnOrAfterGrace;
@property (nonatomic, setter=setUISensitivity:) long long uiSensitivity;
@property (copy, nonatomic) UIColor *tintColor;

+ (_Bool)supportsSecureCoding;
+ (id)complicationTemplateWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)validate;
- (void)_setProvidersPaused:(_Bool)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateProgressProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateEmbeddedTemplateKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateDateKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateAllKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_enumerateScalarKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)beginUpdatesForClient:(id)arg1;
- (void)endUpdatesForClient:(id)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;
- (id)finalizedCopy;
- (struct CGSize)maxSizeForImageProviderKey:(id)arg1;
- (void)enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProgressProviderKeysWithBlock:(CDUnknownBlockType)arg1;

@end
