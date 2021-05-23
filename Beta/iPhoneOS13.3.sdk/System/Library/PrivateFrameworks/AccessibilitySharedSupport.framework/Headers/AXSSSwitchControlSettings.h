/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AXSSSwitchControlSettings : NSObject

{
    _Bool _soundEffectsEnabled;
    _Bool _speechEnabled;
    NSArray *_scanningStyles;
    NSArray *_tapBehaviors;
    NSArray *_cursorSizes;
    NSArray *_postActivationScanLocations;
    double _autoScanningInterval;
    double _autoHideTimeout;
    double _pauseOnFirstItemInterval;
    unsigned long long _numberOfScanLoops;
    double _dwellDuration;
    double _repeatActionInterval;
    double _holdDuration;
    double _ignoreRepeatDuration;
    double _longPressDuration;
    double _autoTapTimeout;
}

@property (copy, nonatomic) NSArray *scanningStyles;
@property (copy, nonatomic) NSArray *tapBehaviors;
@property (copy, nonatomic) NSArray *cursorSizes;
@property (copy, nonatomic) NSArray *postActivationScanLocations;
@property (nonatomic) double autoScanningInterval;
@property (nonatomic) double autoHideTimeout;
@property (nonatomic) double pauseOnFirstItemInterval;
@property (nonatomic) unsigned long long numberOfScanLoops;
@property (nonatomic) double dwellDuration;
@property (nonatomic) double repeatActionInterval;
@property (nonatomic) double holdDuration;
@property (nonatomic) double ignoreRepeatDuration;
@property (nonatomic) _Bool soundEffectsEnabled;
@property (nonatomic) _Bool speechEnabled;
@property (nonatomic) double longPressDuration;
@property (nonatomic) double autoTapTimeout;

- (id)init;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
