/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@interface BWSourceNode : BWNode

@property (nonatomic, readonly) struct OpaqueCMClock *clock;

- (id)nodeType;
- (_Bool)start:(id *)arg1;
- (_Bool)stop:(id *)arg1;
- (void)makeOutputsLiveIfNeeded;

@end
