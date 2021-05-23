/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotItem : NSObject

{
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;

- (id)init;
- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)repeatedItemCounts;
- (void)setRepeatedItemCounts:(unsigned int)arg1;
- (id)itemIndexes;

@end
