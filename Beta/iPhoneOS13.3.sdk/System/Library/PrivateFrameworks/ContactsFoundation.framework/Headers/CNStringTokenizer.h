/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CNStringTokenizer : NSObject

{
    struct __CFStringTokenizer *_tokenizer;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (nonatomic, readonly) struct __CFStringTokenizer *tokenizer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;

+ (id)tokenizeString:(id)arg1;
+ (id)adjustRanges:(id)arg1 toIncludeNonBreakingCharactersInString:(id)arg2;
+ (_Bool)isCharacterNonBreaking:(unsigned short)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (id)tokenizeString:(id)arg1;
- (id)rangesOfWordTokensInString:(id)arg1;
- (id)rangesOfWordUnitTokensInString:(id)arg1;

@end
