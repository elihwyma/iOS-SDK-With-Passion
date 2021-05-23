/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDTableFilter : NSObject

{
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (id)description;
- (int)operatorType;
- (double)value;
- (void)setValue:(double)arg1;
- (int)scale;
- (void)setScale:(int)arg1;
- (void)setOperatorType:(int)arg1;
- (void)setFilterValue:(double)arg1;
- (double)filterValue;

@end
