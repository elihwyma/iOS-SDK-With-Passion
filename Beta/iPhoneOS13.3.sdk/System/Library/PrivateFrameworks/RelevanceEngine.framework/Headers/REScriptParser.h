/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@protocol REBacktrackingTokenBuffer, REScriptParserDelegate;

@interface REScriptParser : NSObject

{
    id <REBacktrackingTokenBuffer> _buffer;
    id <REScriptParserDelegate> _delegate;
}

@property (weak, nonatomic) id <REScriptParserDelegate> delegate;

- (id)parse;
- (id)initWithBacktrackingBuffer:(id)arg1;

@end
