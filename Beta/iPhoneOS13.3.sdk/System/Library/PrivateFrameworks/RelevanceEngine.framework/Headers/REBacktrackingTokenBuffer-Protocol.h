/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@protocol REBacktrackingTokenBuffer <Swift>

- (unsigned short)pop;
- (unsigned short)consume;
- (unsigned short)push;

@end
