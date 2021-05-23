/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSString.h>

@interface NSString (OFNSStringCryptoExtensions)

+ (id)normalizeString:(id)arg1;
+ (id)generateUUID;
+ (id)mimePart:(id)arg1 forName:(id)arg2;
+ (unsigned long long)durationFromFullTimeCodeString:(id)arg1;
+ (id)fullTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (id)shortTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (id)upperBoundString:(id)arg1;
+ (id)mimeBoundary;
+ (id)multipartMIMEContentType;
+ (id)mimeCloser;

- (id)stringByAddingPercentEscapes;
- (id)md5Hash;
- (id)hmacSha1Hash:(id)arg1;
- (id)sha1HashData;
- (id)md5HashString;
- (id)sha1HashString;
- (id)firstline;
- (id)pathRelativeTo:(id)arg1;
- (id)javaScriptEscapedString;
- (id)stringByDeletingTrailingSlash;
- (id)stringByReplacingPercentEscapes;
- (id)stringByAddingPercentEscapesForURLPath;
- (id)stringByCapitalizingFirstCharacter;

@end
