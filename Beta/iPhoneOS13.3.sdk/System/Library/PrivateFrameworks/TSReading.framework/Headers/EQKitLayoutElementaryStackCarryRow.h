/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitLayoutElementaryStackDigitRow.h>

@class NSString;

@interface EQKitLayoutElementaryStackCarryRow : EQKitLayoutElementaryStackDigitRow

{
    vector_e38595b5 mCrossouts;
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

- (id).cxx_construct;
- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;
- (id)initWithChildren:(id)arg1 decimalPoint:(unsigned long long)arg2 position:(long long)arg3 followingSpace:(double)arg4 crossouts:(const vector_e38595b5 *)arg5;
- (int)crossoutAtColumnIndex:(unsigned long long)arg1;

@end
