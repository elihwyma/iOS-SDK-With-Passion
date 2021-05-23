/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVStroke : NSObject

+ (void)initialize;
+ (id)readFromManager:(id)arg1;
+ (id)targetFgColorWithManager:(id)arg1;
+ (void)readFillStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (void)readDashStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (void)readJoinStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (id)readLineEndWithType:(id)arg1 width:(id)arg2 length:(id)arg3;
+ (unsigned char)readCapStyle:(id)arg1;
+ (unsigned char)readCompoundType:(id)arg1;
+ (unsigned char)readLineEndType:(id)arg1;
+ (unsigned char)readLineEndWidth:(id)arg1;
+ (unsigned char)readLineEndLength:(id)arg1;
+ (BOOL)readPresetDashStyle:(id)arg1;

@end
