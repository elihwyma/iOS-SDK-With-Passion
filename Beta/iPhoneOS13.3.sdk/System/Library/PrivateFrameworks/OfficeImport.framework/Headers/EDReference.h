/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface EDReference : NSObject <Swift>

{
    struct EDAreaReference mAreaReference;
}

+ (id)reference;
+ (id)referenceWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
+ (id)referenceWithAreaReference:(struct EDAreaReference *)arg1;
+ (id)referenceWithReference:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReference:(id)arg1;
- (int)firstColumn;
- (int)lastColumn;
- (int)firstRow;
- (int)lastRow;
- (void)setLastColumn:(int)arg1;
- (void)setFirstColumn:(int)arg1;
- (void)setFirstRow:(int)arg1;
- (void)setLastRow:(int)arg1;
- (unsigned long long)countOfCellsBeingReferenced;
- (void)unionWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (id)initWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (struct EDAreaReference)areaReference;
- (id)initWithAreaReference:(struct EDAreaReference *)arg1;
- (_Bool)isEqualToReference:(id)arg1;
- (_Bool)isValidCellReference;
- (_Bool)isValidAreaReference;
- (_Bool)containsRow:(int)arg1 column:(int)arg2;
- (_Bool)isCellReference;
- (_Bool)isRowReference;
- (_Bool)isColumnReference;
- (_Bool)fullyAdjacentToReference:(id)arg1;
- (void)unionWithReference:(id)arg1;
- (void)unionWithRow:(int)arg1 column:(int)arg2;

@end
