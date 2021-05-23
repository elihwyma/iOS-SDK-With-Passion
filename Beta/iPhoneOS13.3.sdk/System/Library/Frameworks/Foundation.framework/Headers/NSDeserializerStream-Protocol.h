/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@protocol NSDeserializerStream

- (unsigned short)initFromMemoryNoCopy:length:freeWhenDone: /* Error: Ran out of types for this method. */;
- (unsigned short)readInt;
- (unsigned short)readAlignedDataSize;
- (unsigned short)readData:length: /* Error: Ran out of types for this method. */;

@end
