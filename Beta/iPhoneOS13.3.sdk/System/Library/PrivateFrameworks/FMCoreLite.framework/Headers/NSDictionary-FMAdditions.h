/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (FMAdditions)

+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)fm_dictionaryWithContentsOfData:(id)arg1;
+ (id)fm_dictionaryWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)dictionaryWithContentsOfData:(id)arg1;

- (id)fm_filter:(CDUnknownBlockType)arg1;
- (id)fm_dictionaryWithLowercaseKeys;
- (id)dictionaryWithLowercaseKeys;
- (id)fm_dictionaryByMappingValues:(CDUnknownBlockType)arg1;

@end
