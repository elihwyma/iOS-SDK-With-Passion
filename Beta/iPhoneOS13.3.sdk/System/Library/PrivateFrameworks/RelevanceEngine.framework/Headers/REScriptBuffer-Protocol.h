/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@protocol REScriptBuffer <Swift>

@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) unsigned short current;

- (unsigned short)next;
- (unsigned short)contentForLine: /* Error: Ran out of types for this method. */;

@end
