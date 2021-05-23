/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSData.h>

@interface NSData (SafariCoreExtras)

- (id)safari_dataByCompressingData;
- (id)safari_dataByDecompressingData;
- (_Bool)safari_dataAppearsToBeCompressed;
- (unsigned long long)safari_hashMD5;
- (id)safari_SHA1Hash;
- (id)safari_descriptionWithoutSpaces;
- (id)safari_dataByAppendingData:(id)arg1;

@end
