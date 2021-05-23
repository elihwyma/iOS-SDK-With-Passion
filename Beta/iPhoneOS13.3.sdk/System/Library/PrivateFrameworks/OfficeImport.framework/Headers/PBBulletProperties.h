/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBBulletProperties : NSObject

+ (int)readBulletNumberScheme:(int)arg1;
+ (id)readBulletProperties:(struct PptParaProperty9 *)arg1 state:(id)arg2;
+ (int)readBulletNumberSchemeFromExtended:(unsigned int)arg1;
+ (int)writeBulletNumberScheme:(int)arg1;

@end
