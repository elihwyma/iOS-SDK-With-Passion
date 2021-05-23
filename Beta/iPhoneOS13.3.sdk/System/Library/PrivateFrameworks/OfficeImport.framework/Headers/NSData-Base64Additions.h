/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSData.h>

@interface NSData (Base64Additions)

+ (id)tsu_decodeFromBase64String:(id)arg1;
+ (id)tsu_decodeFromBase64CString:(const char *)arg1 srcLength:(unsigned long long)arg2;
+ (id)tsu_decodeFromBase64StringWithWhitespace:(id)arg1;
+ (id)tc_nsDataWithOcBinaryData:(const struct OcBinaryData *)arg1;

- (id)tsu_encodeToBase64String;
- (id)tsu_encodeToBase64URLSafeString;

@end
