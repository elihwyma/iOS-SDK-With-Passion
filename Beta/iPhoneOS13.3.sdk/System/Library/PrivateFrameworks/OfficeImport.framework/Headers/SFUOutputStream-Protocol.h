/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/Swift-Protocol.h>

@protocol SFUOutputStream <Swift>

- (unsigned short)close;
- (unsigned short)offset;
- (unsigned short)inputStream;
- (unsigned short)canSeek;
- (unsigned short)closeLocalStream;
- (unsigned short)seekToOffset:whence: /* Error: Ran out of types for this method. */;
- (unsigned short)canCreateInputStream;

@end
