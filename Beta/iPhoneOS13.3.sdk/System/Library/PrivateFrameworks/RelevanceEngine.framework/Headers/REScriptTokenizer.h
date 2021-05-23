/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

#import <RelevanceEngine/Swift-Protocol.h>

@class NSString, REScriptToken;

@protocol REScriptBuffer, REScriptTokenizerDelegate;

@interface REScriptTokenizer : NSObject <Swift>

{
    id <REScriptBuffer> _buffer;
    REScriptToken *_currentToken;
    unsigned long long _line;
    unsigned long long _column;
    id <REScriptTokenizerDelegate> _delegate;
}

@property (weak, nonatomic) id <REScriptTokenizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) REScriptToken *currentToken;

- (void)next;
- (id)_readString;
- (void)_consumeWhitespace;
- (_Bool)_hasChar;
- (_Bool)_matchTokenStart:(CDUnknownFunctionPointerType)arg1 body:(CDUnknownFunctionPointerType)arg2 value:(id *)arg3;
- (unsigned short)_peekChar;
- (void)_popChar;
- (id)_readSingleComment;
- (id)_readMultilineComment;
- (void)_validateToken;
- (id)initWithScriptBuffer:(id)arg1;

@end
