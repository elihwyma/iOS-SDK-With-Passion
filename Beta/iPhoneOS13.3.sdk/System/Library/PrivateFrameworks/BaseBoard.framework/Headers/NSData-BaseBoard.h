/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSData.h>

@interface NSData (BaseBoard)

+ (id)bs_dataWithVMAllocatedBytes:(const void *)arg1 length:(unsigned long long)arg2;

- (void *)bs_bytesForMIG;
- (unsigned int)bs_lengthForMIG;

@end
