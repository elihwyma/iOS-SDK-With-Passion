/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/Swift-Protocol.h>

@protocol PFStream <Swift>

- (unsigned short)openStream;
- (unsigned short)closeStream;
- (unsigned short)streamLength;
- (unsigned short)streamPosition;
- (unsigned short)rewindStream;
- (unsigned short)rewindStream: /* Error: Ran out of types for this method. */;
- (unsigned short)advanceStream;
- (unsigned short)advanceStream:distanceMoved: /* Error: Ran out of types for this method. */;
- (unsigned short)getStreamError;
- (unsigned short)preferredStreamBlockSize;

@end
