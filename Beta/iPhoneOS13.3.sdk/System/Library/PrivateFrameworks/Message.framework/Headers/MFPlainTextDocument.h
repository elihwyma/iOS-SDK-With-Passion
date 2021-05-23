/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableString;

@interface MFPlainTextDocument : NSObject

{
    NSMutableString *_text;
    NSMutableArray *_fragments;
}

- (id)string;
- (unsigned long long)fragmentCount;
- (void)getFormatFlowedString:(id *)arg1 insertedTrailingSpaces:(_Bool *)arg2 encoding:(unsigned int)arg3;
- (id)quotedString:(unsigned int)arg1;
- (void)getString:(id *)arg1 quoteLevel:(unsigned int *)arg2 ofFragmentAtIndex:(unsigned long long)arg3;
- (void)appendString:(id)arg1 withQuoteLevel:(unsigned int)arg2;
- (id)archivedRepresentation;
- (void)appendArchivedRepresentation:(id)arg1;

@end
