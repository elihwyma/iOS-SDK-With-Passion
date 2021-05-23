/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TIWordTokenizer : NSObject

{
    NSString *m_string;
    struct {
        unsigned short buffer[64];
        struct __CFString *theString;
        unsigned short *directUniCharBuffer;
        char *directCStringBuffer;
        struct {
            long long location;
            long long length;
        } rangeToBuffer;
        long long bufferedRangeStart;
        long long bufferedRangeEnd;
    } m_inlineBuffer;
    struct _NSRange m_tokenRange;
    struct _NSRange m_searchRange;
    unsigned long long m_bufferOffset;
}

- (id)init;
- (void)setString:(id)arg1 withSearchRange:(struct _NSRange)arg2;
- (struct _NSRange)advanceToNextToken;
- (struct _NSRange)rangeOfCurrentToken;
- (id)allTokensForString:(id)arg1;

@end
