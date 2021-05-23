/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/Swift-Protocol.h>

@class _DKEvent;

@protocol _DKInstantMonitor <Swift>

@property (copy, nonatomic) CDUnknownBlockType instantHandler;
@property (nonatomic, readonly) _DKEvent *currentEvent;

- (unsigned short)stop;
- (unsigned short)start;
- (unsigned short)setCurrentEvent:inferHistoricalState: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronouslyReflectCurrentValue;

@end
