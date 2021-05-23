/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNListInstructionContents.h>

@class NSArray, NSString;

@interface MNSignInstructionContents : MNListInstructionContents

{
    NSArray *_mergeFormats;
    NSArray *_continueFormats;
    NSArray *_maneuverFormats;
}

@property (retain, nonatomic) NSArray *mergeFormats;
@property (retain, nonatomic) NSArray *continueFormats;
@property (retain, nonatomic) NSArray *maneuverFormats;
@property (nonatomic, readonly) long long context;
@property (nonatomic) _Bool suppressNames;
@property (retain, nonatomic) NSString *roadName;
@property (nonatomic, readonly) _Bool hasServerContent;
@property (nonatomic) _Bool suppressFallback;

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3;

- (id)description;
- (void)_populateFromStep:(id)arg1;
- (id)_instructionsForFormats:(id)arg1;
- (id)instructionWithShorterAlternatives;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;

@end
