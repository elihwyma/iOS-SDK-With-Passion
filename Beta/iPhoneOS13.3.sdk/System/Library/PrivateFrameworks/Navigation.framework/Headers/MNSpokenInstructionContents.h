/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNListInstructionContents.h>

@class NSArray, NSString;

@protocol GEOServerFormattedString;

@interface MNSpokenInstructionContents : MNListInstructionContents

{
    CDStruct_61a83fd4 _options;
    _Bool _isSecondary;
    id <GEOServerFormattedString> _proceedInstructionFormat;
    id <GEOServerFormattedString> _continueInstructionFormat;
    id <GEOServerFormattedString> _initialInstructionFormat;
    id <GEOServerFormattedString> _prepareInstructionFormat;
    NSArray *_executionInstructionFormats;
}

@property (retain, nonatomic) id <GEOServerFormattedString> proceedInstructionFormat;
@property (retain, nonatomic) id <GEOServerFormattedString> continueInstructionFormat;
@property (retain, nonatomic) id <GEOServerFormattedString> initialInstructionFormat;
@property (retain, nonatomic) id <GEOServerFormattedString> prepareInstructionFormat;
@property (retain, nonatomic) NSArray *executionInstructionFormats;
@property (nonatomic) long long context;
@property (nonatomic, readonly) int numSignsWanted;
@property (nonatomic) _Bool suppressNames;
@property (retain, nonatomic) NSString *roadName;
@property (nonatomic, readonly) _Bool hasServerContent;
@property (nonatomic) _Bool suppressFallback;

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3 options:(CDStruct_61a83fd4 *)arg4 isSecondary:(_Bool)arg5;

- (id)init;
- (id)description;
- (void)_populateFromStep:(id)arg1;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)_instructionsForFormats:(id)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives:(id *)arg1;

@end
