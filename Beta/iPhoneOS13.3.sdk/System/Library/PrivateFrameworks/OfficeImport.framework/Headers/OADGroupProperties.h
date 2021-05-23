/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADDrawableProperties.h>

@class NSArray, NSString, OADFill, OADScene3D, OADShape3D;

__attribute__((visibility("hidden")))
@interface OADGroupProperties : OADDrawableProperties

{
    OADFill *mFill;
    NSArray *mEffects;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultProperties;

- (id)fill;
- (id)initWithDefaults;
- (_Bool)hasFill;
- (_Bool)hasEffects;
- (void)setFill:(id)arg1;
- (id)effects;
- (void)setEffects:(id)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (void)setScene3D:(id)arg1;
- (void)setShape3D:(id)arg1;
- (_Bool)hasScene3D;
- (_Bool)hasShape3D;
- (id)scene3D;
- (id)shape3D;

@end
