/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, REScriptToken;

@protocol RETokenBuffer;

@interface RETokenStack : NSObject

{
    id <RETokenBuffer> _buffer;
    unsigned long long _position;
    NSMutableArray *_tokenStack;
    NSMutableArray *_positionStack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) REScriptToken *currentToken;

- (void)next;
- (void)pop;
- (void)consume;
- (void)push;
- (id)initWithTokenBuffer:(id)arg1;

@end
