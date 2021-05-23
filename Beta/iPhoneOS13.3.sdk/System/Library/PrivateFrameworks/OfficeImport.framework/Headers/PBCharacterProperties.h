/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBCharacterProperties : NSObject

+ (void)readCharacterProperties:(id)arg1 characterProperty:(struct PptCharProperty *)arg2 state:(id)arg3;
+ (void)readCharacterProperties:(id)arg1 specialInfo:(const struct PptSpecialInfo *)arg2 state:(id)arg3;
+ (void)readCharacterProperties:(id)arg1 characterPropertyRun:(struct PptCharRun *)arg2 state:(id)arg3;
+ (void)readCharacterProperties:(id)arg1 specialInfoRun:(const struct PptSpecialInfoRun *)arg2 state:(id)arg3;

@end
