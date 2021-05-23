/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@protocol NSDiscardableContent

- (unsigned short)beginContentAccess;
- (unsigned short)endContentAccess;
- (unsigned short)discardContentIfPossible;
- (unsigned short)isContentDiscarded;

@end
