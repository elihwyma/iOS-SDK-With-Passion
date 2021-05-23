/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSString, TDTemplateRenderingMode, TDThemeBitSource;

@interface TDAsset : NSManagedObject

{
    unsigned int _scaleFactor;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) TDThemeBitSource *source;
@property (nonatomic, readonly) NSString *baseName;
@property (retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode;

+ (unsigned int)scaleFactorFromImageFilename:(id)arg1;
+ (id)_filenameRegex;
+ (_Bool)isTemplateFromImageFilename:(id)arg1;
+ (long long)idiomFromImageFilename:(id)arg1;
+ (long long)subtypeFromImageFilename:(id)arg1;

- (unsigned int)scaleFactor;
- (void)setScaleFactor:(unsigned int)arg1;
- (id)fileURLWithDocument:(id)arg1;
- (_Bool)hasProduction;
- (id)_sourceRelativePathComponents;
- (id)sourceRelativePath;
- (void)setHasProduction:(id)arg1;

@end
