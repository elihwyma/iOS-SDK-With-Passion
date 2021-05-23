/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EQKitLayoutElementaryStackLineRow : NSObject

{
    unsigned long long mLength;
    double mThickness;
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

- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;
- (id)initWithLength:(unsigned long long)arg1 thickness:(double)arg2 position:(long long)arg3 followingSpace:(double)arg4;
- (id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(__wrap_iter_8fb6ff7c)arg2 iterMax:(__wrap_iter_8fb6ff7c)arg3 previousRow:(id)arg4 layoutManager:(const struct EQKitLayoutManager *)arg5;

@end
