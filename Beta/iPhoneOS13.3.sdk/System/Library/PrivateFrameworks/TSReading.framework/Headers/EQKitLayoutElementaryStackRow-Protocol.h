/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol EQKitLayoutElementaryStackRow <Swift>

@property (nonatomic, readonly) long long alignmentShift;
@property (nonatomic) unsigned long long firstColumnIndex;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) _Bool spansStack;
@property (nonatomic, readonly) double followingSpace;

- (unsigned short)populateMaxColumnWidths: /* Error: Ran out of types for this method. */;
- (unsigned short)newBoxWithStackWidth:columnWidthIter:iterMax:previousRow:layoutManager: /* Error: Ran out of types for this method. */;

@end
