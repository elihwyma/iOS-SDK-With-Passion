/*
 Image: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
 */

#import <Foundation/NSData.h>

@interface NSData (Checksum)

- (void)checksum:(unsigned char [32])arg1;
- (void)checksumDataToChecksum:(unsigned char [32])arg1;
- (_Bool)matchesChecksum:(unsigned char [32])arg1;
- (id)checksumData;
- (_Bool)matchesChecksumData:(id)arg1;

@end
