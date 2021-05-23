/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol GEOServerFormattedString;

@interface MNTransitInstruction : NSObject

{
    _Bool _hideTimeInstructionsWhenCollapsed;
    long long _context;
    NSArray *_majorFormattedInstruction;
    NSArray *_minorFormattedInstruction;
    NSArray *_tertiaryFormattedInstruction;
    id <GEOServerFormattedString> _departureBarInstruction;
    long long _departureBarStyle;
    id <GEOServerFormattedString> _countStopsFormattedString;
    id <GEOServerFormattedString> _expandableListFormattedString;
    id <GEOServerFormattedString> _primaryTimeInstruction;
    id <GEOServerFormattedString> _secondaryTimeinstruction;
}

@property (copy, nonatomic) NSArray *majorFormattedInstruction;
@property (copy, nonatomic) NSArray *minorFormattedInstruction;
@property (copy, nonatomic) NSArray *tertiaryFormattedInstruction;
@property (retain, nonatomic) id <GEOServerFormattedString> departureBarInstruction;
@property (nonatomic) long long departureBarStyle;
@property (retain, nonatomic) id <GEOServerFormattedString> countStopsFormattedString;
@property (retain, nonatomic) id <GEOServerFormattedString> expandableListFormattedString;
@property (retain, nonatomic) id <GEOServerFormattedString> primaryTimeInstruction;
@property (retain, nonatomic) id <GEOServerFormattedString> secondaryTimeinstruction;
@property (nonatomic) _Bool hideTimeInstructionsWhenCollapsed;
@property (nonatomic, readonly) long long context;

+ (id)instructionForUncertainArrivalToStationStep:(id)arg1 context:(long long)arg2;

- (id)initWithContext:(long long)arg1;
- (id)instructionSet;
- (id)instructionSetsForInstructionType:(long long)arg1;
- (struct NSDictionary *)overridenInstructionsMapping;
- (void)_fillInInstructions;
- (void)refreshInstructionStrings;
- (id)formattedInstructionForType:(long long)arg1;

@end
