/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <Foundation/NSString.h>

@interface NSString (NSStringUTF8CountConvenience)

- (unsigned long long)UTF8ByteCount;
- (id)prefixStringWithByteCount:(unsigned long long)arg1;
- (long long)IPv4StringCompare:(id)arg1;
- (long long)IPv6StringCompare:(id)arg1;
- (id)stringByCapitalizingFirstLetter;
- (_Bool)isValidEmailFormat;

@end
