/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDReference.h>

__attribute__((visibility("hidden")))
@interface EDSheetReference : EDReference

{
    unsigned long long mSheetIndex;
}

+ (id)referenceWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)sheetIndex;
- (_Bool)fullyAdjacentToReference:(id)arg1;
- (void)unionWithReference:(id)arg1;
- (id)initWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;
- (_Bool)isEqualToTableReference:(id)arg1;
- (_Bool)isSheedIndexValid;

@end
