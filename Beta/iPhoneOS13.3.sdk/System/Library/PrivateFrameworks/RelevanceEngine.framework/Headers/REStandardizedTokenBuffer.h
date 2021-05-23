/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

#import <RelevanceEngine/Swift-Protocol.h>

@class NSString, REScriptToken;

@protocol RETokenBuffer;

@interface REStandardizedTokenBuffer : NSObject <Swift>

{
    id <RETokenBuffer> _buffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) REScriptToken *currentToken;

- (void)next;
- (void)_cleanTokens;
- (id)initWithTokenBuffer:(id)arg1;

@end
