/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKPhotoAnalysis : NSObject

{
    CDStruct_77693742 _data;
    unsigned int _version;
}

@property (nonatomic, readonly, getter=isComplexBackground) _Bool complexBackground;
@property (nonatomic, readonly, getter=isColoredText) _Bool coloredText;
@property (nonatomic, readonly) float textHue;
@property (nonatomic, readonly) float textSaturation;
@property (nonatomic, readonly) float textBrightness;
@property (nonatomic, readonly) float bgHue;
@property (nonatomic, readonly) float bgSaturation;
@property (nonatomic, readonly) float bgBrightness;
@property (nonatomic, readonly) float shadowHue;
@property (nonatomic, readonly) float shadowSaturation;
@property (nonatomic, readonly) float shadowBrightness;
@property (nonatomic, readonly) CDStruct_77693742 structure;
@property (nonatomic, readonly) unsigned int version;

+ (_Bool)supportsSecureCoding;
+ (id)analysisWithImage:(id)arg1 alignment:(unsigned long long)arg2 deviceSizeClass:(unsigned long long)arg3;
+ (id)defaultAnalysis;
+ (id)analysisWithImage:(id)arg1 alignment:(id)arg2;
+ (id)invalidAnalysis;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initFromDictionary:(id)arg1;
- (id)encodeAsDictionary;
- (id)initWithStructure:(CDStruct_77693742)arg1;

@end
