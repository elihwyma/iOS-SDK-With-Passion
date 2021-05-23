/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBFontTable : NSObject

+ (unsigned long long)edFontIndexFromXlFontIndex:(unsigned int)arg1;
+ (void)readWithState:(id)arg1;
+ (unsigned int)xlFontIndexFromEDFontIndex:(unsigned long long)arg1;

@end
