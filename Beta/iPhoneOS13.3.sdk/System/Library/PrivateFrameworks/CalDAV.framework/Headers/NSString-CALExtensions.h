/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <Foundation/NSString.h>

@interface NSString (CALExtensions)

+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
+ (id)ellipsisString;
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(unsigned long long)arg2;

- (id)quote;
- (id)appendSlashIfNeeded;
- (id)stringByURLUnquoting;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFinalChar:(unsigned short)arg1;
- (id)trimFirstComma;
- (id)trimFinalComma;
- (id)stringByURLQuoting;
- (id)stringByURLQuotingPaths;
- (id)stringByEncodingSlashes;
- (id)stringByDecodingSlashes;
- (id)trimChar:(unsigned short)arg1;
- (id)trimCommas;
- (id)trimWhiteSpace;
- (id)unquote;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)safeFilename;
- (id)removeSlashIfNeeded;
- (id)stringByXMLUnquoting;

@end
