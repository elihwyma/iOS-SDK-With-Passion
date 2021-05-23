/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODDShapeAdjustment : NSObject

{
    unsigned int mIndex;
    double mValue;
}

- (id)description;
- (double)value;
- (unsigned int)index;
- (void)setValue:(double)arg1;
- (void)setIndex:(unsigned int)arg1;

@end
