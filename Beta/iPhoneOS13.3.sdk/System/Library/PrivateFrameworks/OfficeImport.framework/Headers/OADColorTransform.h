/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADColorTransform : NSObject <Swift>

{
    int mType;
}

+ (id)colorByApplyingTransforms:(id)arg1 toColor:(id)arg2;
+ (float)alphaByApplyingTransforms:(id)arg1 toAlpha:(float)arg2;
+ (float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2;
+ (id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2;
+ (id)applyRGBTransform:(id)arg1 toColor:(id)arg2 skipGamma:(_Bool)arg3;
+ (id)applyHSLTransform:(id)arg1 toColor:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (id)initWithType:(int)arg1;

@end
