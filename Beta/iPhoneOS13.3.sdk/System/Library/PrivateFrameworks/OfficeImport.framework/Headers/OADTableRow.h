/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTableRow : NSObject

{
    NSMutableArray *mCells;
    float mHeight;
}

- (id)init;
- (id)description;
- (float)height;
- (void)setHeight:(float)arg1;
- (unsigned long long)cellCount;
- (id)cellAtIndex:(unsigned long long)arg1;
- (id)addCell;
- (void)flipCellsRTL;

@end
