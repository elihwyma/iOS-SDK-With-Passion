/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, NSArray, NTKColoringLabel, NTKPillView, UIColor;

@interface NTKCalendarRichComplicationContentView : UIView

{
    _Bool _hasConflicts;
    CLKDevice *_device;
    NTKPillView *_verticalPill;
    NTKPillView *_verticalPill2;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_bodyLabel;
    NTKColoringLabel *_body2Label;
    NSArray *_pillAlignedToBody1BottomConstraints;
    NSArray *_pillAlignedToBody2BottomConstraints;
    NSArray *_conflictEventsPillAlignmentConstraints;
    NSArray *_conflictEventsPill2AlignmentConstraints;
    NSArray *_noPillConstraints;
    UIColor *_firstEventColor;
    NSArray *_otherEventColors;
    unsigned long long _eventCount;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (retain, nonatomic) NTKPillView *verticalPill;
@property (retain, nonatomic) NTKPillView *verticalPill2;
@property (retain, nonatomic) NTKColoringLabel *headerLabel;
@property (retain, nonatomic) NTKColoringLabel *bodyLabel;
@property (retain, nonatomic) NTKColoringLabel *body2Label;
@property (retain, nonatomic) NSArray *pillAlignedToBody1BottomConstraints;
@property (retain, nonatomic) NSArray *pillAlignedToBody2BottomConstraints;
@property (retain, nonatomic) NSArray *conflictEventsPillAlignmentConstraints;
@property (retain, nonatomic) NSArray *conflictEventsPill2AlignmentConstraints;
@property (retain, nonatomic) NSArray *noPillConstraints;
@property (retain, nonatomic) UIColor *firstEventColor;
@property (retain, nonatomic) NSArray *otherEventColors;
@property (nonatomic) unsigned long long eventCount;
@property (nonatomic) _Bool hasConflicts;

- (void)updateLayout;
- (id)initForDevice:(id)arg1;

@end
