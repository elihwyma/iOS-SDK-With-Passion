/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class CUIKSingleDayTimelineLayoutPartition, NSArray, NSMutableArray;

@protocol CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils, CUIKSingleDayTimelineViewItem;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject

{
    id <CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtBeginning;
    id <CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtEnd;
    id <CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
    _Bool _useTemporaryFitnessLevel;
    _Bool _temporaryFitnessLevelRequiresCalculation;
    double _temporaryFitnessLevel;
    _Bool _originalFitnessLevelRequiresCalculation;
    double _originalFitnessLevel;
    _Bool _ignoreFirstOccurrenceInFitnessCalculations;
    _Bool _ignoreLastOccurrenceInFitnessCalculations;
    _Bool _isOnlyBucket;
    CUIKSingleDayTimelineLayoutPartition *_correspondingPartition;
    id <CUIKSingleDayTimelineGeometryDelegate> _geometryDelegate;
    NSMutableArray *_currentOccurrences;
}

@property (retain, nonatomic) CUIKSingleDayTimelineLayoutPartition *correspondingPartition;
@property (retain, nonatomic) NSMutableArray *currentOccurrences;
@property (nonatomic, readonly) NSArray *occurrences;
@property (nonatomic) _Bool isOnlyBucket;
@property (weak) id <CUIKSingleDayTimelineGeometryDelegate> geometryDelegate;

- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 geometryDelegate:(id)arg4;
- (void)addOccurrenceTemporarilyToEnd:(id)arg1;
- (void)makeTemporaryChangesPermanent;
- (void)stampFramesOntoOccurrences;
- (id)earliestOccurrence;
- (id)_occurrencesForFitnessLevel;
- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3;
- (void)addOccurrenceTemporarilyToBeginning:(id)arg1;
- (void)removeOccurrenceAtBeginningTemporarily;
- (void)removeOccurrenceAtEndTemporarily;
- (void)revertTemporaryChanges;

@end
