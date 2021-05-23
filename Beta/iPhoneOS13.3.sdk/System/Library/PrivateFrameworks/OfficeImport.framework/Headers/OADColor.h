/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADColor : NSObject <Swift>

{
    NSMutableArray *mTransforms;
}

+ (id)tsuColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)basicMapOfColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)rgbColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (float)alphaWithColor:(id)arg1;
+ (id)tsuColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)tsuColorWithRgbColor:(id)arg1;
+ (int)mapSchemeColorID:(int)arg1 colorMap:(id)arg2;
+ (id)mapAdjustedColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)transforms;
- (void)addTransform:(id)arg1;
- (id)colorForStyleColor:(id)arg1;
- (void)setTransforms:(id)arg1;
- (void)addTransformOfType:(int)arg1;
- (void)addTransformOfType:(int)arg1 value:(float)arg2;

@end
