/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSTCellRegionRowMajorIterator : NSObject

{
    set_1f50691b mCellRangeSet;
    CDStruct_0441cfb5 mCellID;
    CDStruct_5f1f7aa9 mBoundingCellRange;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)terminate;
- (id).cxx_construct;
- (id)initWithCellRegion:(id)arg1;
- (CDStruct_0441cfb5)getNext;

@end
