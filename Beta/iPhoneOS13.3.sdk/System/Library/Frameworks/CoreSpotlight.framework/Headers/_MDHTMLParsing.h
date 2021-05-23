/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _MDHTMLParsing : NSObject

{
    unsigned short *uniChars;
    unsigned long long uniCharLen;
    unsigned long long uniCharSize;
    unsigned char newLineBuffer[8];
    unsigned long long newLineLength;
    NSMutableDictionary *attributes;
    NSString *metaName;
    NSString *metaHttpEquiv;
    NSString *metaContent;
    unsigned long long sourceEncoding;
    unsigned int sourceCFEncoding;
    unsigned long long indexingLimit;
    const char *titleStart;
    unsigned int titleLength;
    _Bool inHead;
    _Bool inTitle;
    _Bool inScript;
    _Bool inStyle;
}

+ (void)initialize;

- (void)dealloc;
- (void)appendUnichars:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)initWithEncoding:(unsigned long long)arg1;
- (void)appendText:(const char *)arg1 length:(unsigned long long)arg2;
- (void)appendNewline;

@end
