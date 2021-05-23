/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@protocol NSDiscardableContent

- (unsigned short)beginContentAccess;
- (unsigned short)endContentAccess;
- (unsigned short)discardContentIfPossible;
- (unsigned short)isContentDiscarded;

@end
