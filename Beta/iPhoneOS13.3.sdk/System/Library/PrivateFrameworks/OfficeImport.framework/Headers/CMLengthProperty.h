/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMProperty.h>

__attribute__((visibility("hidden")))
@interface CMLengthProperty : CMProperty

{
    double value;
    int unitType;
}

+ (double)convertToPoints:(double)arg1 unit:(int)arg2;
+ (id)cssStringValue:(double)arg1 unit:(int)arg2;

- (int)intValue;
- (id)description;
- (double)value;
- (int)compareValue:(id)arg1;
- (id)initWithNumber:(double)arg1;
- (int)unitType;
- (id)initWithNumber:(double)arg1 unit:(int)arg2;
- (id)cssStringForName:(id)arg1;
- (id)cssString;
- (void)addNumber:(double)arg1 unit:(int)arg2;

@end
