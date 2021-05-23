/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CNNameStringTokenizer : NSObject

{
    struct __CFStringTokenizer *_tokenizer;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (nonatomic, readonly) struct __CFStringTokenizer *tokenizer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;

+ (id)tokenizeNameString:(id)arg1 usingLocale:(id)arg2 inferredNameOrder:(long long *)arg3;
+ (void)setInferredNameOrder:(long long *)arg1 toTokenizerNameOrder:(int)arg2;
+ (id)tokenizeNameString:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (id)tokenizeNameString:(id)arg1 inferredNameOrder:(long long *)arg2;

@end
