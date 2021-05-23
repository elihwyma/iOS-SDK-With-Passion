/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedWaypoint, NSArray, NSString;

@protocol GEOServerFormattedString;

@interface MNListInstructionContents : NSObject

{
    double _distance;
    id <GEOServerFormattedString> _distanceFormat;
    NSArray *_instructionFormats;
    int _maneuverType;
    int _transportType;
    NSString *_intersectionName;
    NSString *_destinationName;
    NSString *_exitNumber;
    NSArray *_branchNames;
    NSArray *_towardNames;
    int _junctionAngle;
    _Bool _toFreeway;
    _Bool _suppressNames;
    _Bool _suppressFallback;
    NSString *_roadName;
    GEOComposedWaypoint *_destination;
}

@property (nonatomic) int transportType;
@property (nonatomic) double distance;
@property (retain, nonatomic) id <GEOServerFormattedString> distanceFormat;
@property (retain, nonatomic) NSArray *instructionFormats;
@property (retain, nonatomic) GEOComposedWaypoint *destination;
@property (retain, nonatomic) NSString *destinationName;
@property (nonatomic, readonly) long long context;
@property (nonatomic) _Bool suppressNames;
@property (retain, nonatomic) NSString *roadName;
@property (nonatomic, readonly) _Bool hasServerContent;
@property (nonatomic) _Bool suppressFallback;

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2;

- (id)init;
- (id)description;
- (id)instruction;
- (void)_populateFromStep:(id)arg1;
- (id)_instructionsForFormats:(id)arg1;
- (id)stringForDistance:(double)arg1;
- (id)instructionWithShorterAlternatives;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;

@end
