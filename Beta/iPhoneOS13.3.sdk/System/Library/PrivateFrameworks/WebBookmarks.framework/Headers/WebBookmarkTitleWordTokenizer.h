/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSString, TIWordTokenizer;

__attribute__((visibility("hidden")))
@interface WebBookmarkTitleWordTokenizer : NSObject

{
    NSString *_string;
    unsigned long long _stringLength;
    TIWordTokenizer *_wordTokenizer;
    struct _NSRange _rangeOfNextToken;
    unsigned long long _startOfUnclassifiedRangeBeforeNextToken;
}

+ (void)initialize;

- (id)init;
- (void)setString:(id)arg1;
- (struct _NSRange)advanceToNextToken;

@end
