/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@class NSString;

@protocol MNInstructionContents

@property (nonatomic, readonly) long long context;
@property (nonatomic) _Bool suppressNames;
@property (retain, nonatomic) NSString *roadName;
@property (nonatomic, readonly) _Bool hasServerContent;
@property (nonatomic) _Bool suppressFallback;

- (unsigned short)instruction;
- (unsigned short)stringForDistance: /* Error: Ran out of types for this method. */;
- (unsigned short)instructionWithShorterAlternatives;
- (unsigned short)instructionForStage:distance: /* Error: Ran out of types for this method. */;

@end
