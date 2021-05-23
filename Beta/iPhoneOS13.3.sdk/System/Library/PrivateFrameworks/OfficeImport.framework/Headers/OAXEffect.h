/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXEffect : NSObject

+ (void)readOuterShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)readPresetShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)readReflection:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)readGlow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)readShadow:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (void)writeShadowBase:(id)arg1 to:(id)arg2;
+ (id)presetShadowTypeEnumMap;
+ (void)writeOuterShadow:(id)arg1 includeRotateWithShape:(_Bool)arg2 to:(id)arg3;
+ (void)writePresetShadow:(id)arg1 to:(id)arg2;
+ (void)writeReflection:(id)arg1 to:(id)arg2;
+ (void)writeGlow:(id)arg1 to:(id)arg2;
+ (id)updateIncomingEffects:(id)arg1;
+ (id)updateOutgoingEffects:(id)arg1;
+ (id)readEffectsFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (_Bool)isEmpty:(id)arg1;

@end
