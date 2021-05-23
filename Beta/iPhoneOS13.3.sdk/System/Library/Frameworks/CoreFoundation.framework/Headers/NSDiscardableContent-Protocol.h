/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@protocol NSDiscardableContent

- (unsigned short)beginContentAccess;
- (unsigned short)endContentAccess;
- (unsigned short)discardContentIfPossible;
- (unsigned short)isContentDiscarded;

@end
