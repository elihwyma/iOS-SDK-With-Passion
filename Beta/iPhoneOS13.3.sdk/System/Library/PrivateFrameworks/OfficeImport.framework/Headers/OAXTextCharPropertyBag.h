/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextCharPropertyBag : NSObject

+ (void)readCharacterProperties:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (unsigned char)readUnderlineType:(id)arg1;
+ (void)readFormatting:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (void)readFont:(struct _xmlNode *)arg1 characterProperties:(id)arg2;
+ (id)oaxUnderlineMap;
+ (id)stringWithCapsType:(unsigned char)arg1;
+ (id)stringWithStrikeThroughType:(unsigned char)arg1;
+ (id)stringWithUnderlineType:(unsigned char)arg1;

@end
