/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSData.h>

@interface NSData (NSDataExtensions)

- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_subdataWithRange:(struct _NSRange)arg1;
- (struct _NSRange)mf_rangeOfRFC822HeaderData;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (id)mf_encodeBase64;
- (id)mf_decodeBase64;
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)mf_rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)mf_decodeQuotedPrintableForText:(_Bool)arg1;
- (_Bool)mf_immutable;
- (id)mf_decodeUuencoded;
- (id)mf_decodeBase64InRange:(struct _NSRange *)arg1;
- (id)mf_decodeModifiedBase64;
- (id)mf_encodeModifiedBase64;
- (id)mf_encodeBase64HeaderData;
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (id)mf_subdataToIndex:(unsigned long long)arg1;
- (id)mf_subdataFromIndex:(unsigned long long)arg1;
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;

@end
