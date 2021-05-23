/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class REScriptToken;

@protocol RETokenBuffer <Swift>

@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) REScriptToken *currentToken;

- (unsigned short)next;

@end
