/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSSmartQuoteOptions;

@protocol NSSmartPunctuationClient;

@interface NSSmartPunctuationController : NSObject

{
    id <NSSmartPunctuationClient> _client;
    NSSmartQuoteOptions *_options;
    unsigned long long _types;
}

@property id <NSSmartPunctuationClient> client;
@property (copy) NSSmartQuoteOptions *smartQuoteOptions;
@property _Bool smartQuotesEnabled;
@property _Bool smartDashesEnabled;

- (id)init;
- (void)dealloc;
- (void)clientDidReplaceRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;

@end
