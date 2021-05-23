/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol TSWPReplaceAction <Swift>

- (unsigned short)delta;
- (unsigned short)insertedRange;
- (unsigned short)performWithStorage:delta:undoTransaction:replaceBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)targetCharIndex;

@end
