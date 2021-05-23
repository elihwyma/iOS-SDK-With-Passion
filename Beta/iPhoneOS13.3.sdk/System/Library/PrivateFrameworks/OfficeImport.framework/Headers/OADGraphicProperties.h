/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADDrawableProperties.h>

@class NSArray, NSString, OADFill, OADScene3D, OADShape3D, OADStroke;

__attribute__((visibility("hidden")))
@interface OADGraphicProperties : OADDrawableProperties

{
    OADFill *mFill;
    NSArray *mEffects;
    NSArray *mExts;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned int mHasIsBehindText:1;
    unsigned int mIsBehindText:1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (void)setParent:(id)arg1;
- (id)stroke;
- (id)fill;
- (id)initWithDefaults;
- (_Bool)hasStroke;
- (_Bool)hasFill;
- (_Bool)hasEffects;
- (void)setStroke:(id)arg1;
- (void)setFill:(id)arg1;
- (id)effects;
- (void)setEffects:(id)arg1;
- (void)setIsBehindText:(_Bool)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setExts:(id)arg1;
- (_Bool)hasExts;
- (_Bool)hasIsBehindText;
- (id)exts;
- (_Bool)isBehindText;
- (_Bool)hasNonEmptyFill;
- (void)setScene3D:(id)arg1;
- (void)setShape3D:(id)arg1;
- (_Bool)hasScene3D;
- (_Bool)hasShape3D;
- (id)scene3D;
- (id)shape3D;

@end
