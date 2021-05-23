/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVColor : NSObject

+ (int)readColorAdjustmentType:(id)arg1;
+ (id)readRGBColorFromAttribute:(id)arg1;
+ (id)readPropertyColorFromAttribute:(id)arg1 manager:(id)arg2;
+ (int)readColorProperty:(id)arg1;
+ (id)readColorProperty:(int)arg1 manager:(id)arg2;
+ (id)readColorFromAttribute:(id)arg1 alpha:(float)arg2 manager:(id)arg3;

@end
