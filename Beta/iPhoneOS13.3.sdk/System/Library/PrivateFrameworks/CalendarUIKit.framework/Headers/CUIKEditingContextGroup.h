/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class CUIKObjectGroup, EKEventStore, NSMutableArray, NSNumber, NSSet;

@interface CUIKEditingContextGroup : NSObject

{
    CUIKObjectGroup *_objectGroup;
    NSSet *_openContexts;
    EKEventStore *_eventStore;
    NSMutableArray *_additionalObjectGroups;
    NSNumber *_spanDecisionAsNumber;
    NSNumber *_earlyCommitDecisionAsNumber;
}

@property (retain) CUIKObjectGroup *objectGroup;
@property (retain) NSMutableArray *additionalObjectGroups;
@property (retain) NSSet *openContexts;
@property (retain) NSNumber *spanDecisionAsNumber;
@property (retain) NSNumber *earlyCommitDecisionAsNumber;
@property (weak) EKEventStore *eventStore;

@end
