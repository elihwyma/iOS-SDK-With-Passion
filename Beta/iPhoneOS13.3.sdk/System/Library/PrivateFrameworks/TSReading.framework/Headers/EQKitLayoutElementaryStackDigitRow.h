/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface EQKitLayoutElementaryStackDigitRow : NSObject

{
    NSArray *mColumnBoxes;
    long long mAlignmentShift;
    unsigned long long mFirstColumnIndex;
    double mFollowingSpace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long alignmentShift;
@property (nonatomic) unsigned long long firstColumnIndex;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) _Bool spansStack;
@property (nonatomic, readonly) double followingSpace;

- (void)dealloc;
- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;
- (id)initWithChildren:(id)arg1 decimalPoint:(unsigned long long)arg2 position:(long long)arg3 followingSpace:(double)arg4;
- (id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(__wrap_iter_8fb6ff7c)arg2 iterMax:(__wrap_iter_8fb6ff7c)arg3 previousRow:(id)arg4 layoutManager:(const struct EQKitLayoutManager *)arg5;
- (id)p_crossoutDigitBox:(id)arg1 crossout:(int)arg2 layoutManager:(const struct EQKitLayoutManager *)arg3;

@end
