/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXBlipEffects : NSObject

+ (id)readLuminanceEffect:(struct _xmlNode *)arg1;
+ (id)readGrayscaleEffect:(struct _xmlNode *)arg1;
+ (id)readBiLevelEffect:(struct _xmlNode *)arg1;
+ (id)readColorChangeEffect:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readAlphaModFixEffect:(struct _xmlNode *)arg1;
+ (id)readDuotoneEffect:(struct _xmlNode *)arg1;
+ (void)writeAlphaModFixEffect:(id)arg1 to:(id)arg2;
+ (void)writeBiLevelEffect:(id)arg1 to:(id)arg2;
+ (void)writeColorChangeEffect:(id)arg1 to:(id)arg2;
+ (void)writeDuotoneEffect:(id)arg1 to:(id)arg2;
+ (void)writeGrayscaleEffect:(id)arg1 to:(id)arg2;
+ (void)writeLuminanceEffect:(id)arg1 to:(id)arg2;
+ (void)readBlipEffectsFromBlipRef:(struct _xmlNode *)arg1 toBlipRef:(id)arg2 drawingState:(id)arg3;
+ (void)writeBlipEffects:(id)arg1 to:(id)arg2;
+ (id)duotoneTransferModeEnumMap;

@end
