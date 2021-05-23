/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSString.h>

@interface NSString (SLWeiboStringAdditions)

- (unsigned long long)SLWeiboCharacterCountWithShortenedURLLength:(unsigned long long)arg1;
- (_Bool)isWeiboDuplicatePostError;
- (id)_SHA256String;
- (id)sl_urlEncodedSHA256;
- (unsigned long long)SLTwitterCharacterCountWithShortenedURLLength:(unsigned long long)arg1;
- (_Bool)isTwitterDuplicatePostError;
- (unsigned long long)SLTencentWeiboCharacterCountWithShortenedURLLength:(unsigned long long)arg1;
- (_Bool)isTencentWeiboDuplicatePostError;
- (_Bool)hasCaseInsensitiveSuffix:(id)arg1;
- (id)urlEncodedString;

@end
