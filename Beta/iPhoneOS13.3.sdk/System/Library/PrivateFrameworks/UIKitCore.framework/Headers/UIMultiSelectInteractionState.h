/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIMultiSelectInteractionState : NSObject

{
    unsigned long long _ignoringSelectionChangedNotificationsCounter;
    _Bool _selecting;
    NSIndexPath *_startIndexPath;
    NSIndexPath *_endIndexPath;
    NSArray *_originallySelectedIndexPaths;
    NSArray *_allSelectedIndexPaths;
    struct CGPoint _startPoint;
}

@property (nonatomic) struct CGPoint startPoint;
@property (retain, nonatomic) NSIndexPath *startIndexPath;
@property (retain, nonatomic) NSIndexPath *endIndexPath;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (copy, nonatomic) NSArray *originallySelectedIndexPaths;
@property (copy, nonatomic) NSArray *allSelectedIndexPaths;
@property (nonatomic, readonly) _Bool ignoringSelectionChangedNotifications;

- (void)ignoreSelectionChangedNotificationsWithBlock:(CDUnknownBlockType)arg1;
- (id)pathsToSelectForInterpolatedIndexPaths:(id)arg1;
- (id)pathsToDeselectForInterpolatedIndexPaths:(id)arg1 currentlySelectedIndexPaths:(id)arg2;
- (id)initWithCurrentSelection:(id)arg1;
- (void)updateStateWithDifferenceFromCurrentSelection:(id)arg1;
- (void)updateStateWithStartingIndexPath:(id)arg1 otherSelectedIndexPaths:(id)arg2;
- (_Bool)stillValidForSelectedIndexPaths:(id)arg1;

@end
