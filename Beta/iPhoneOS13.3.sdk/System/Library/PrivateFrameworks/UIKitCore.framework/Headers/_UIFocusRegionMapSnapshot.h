/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, UIImage, UIView, _UIFocusRegionMapSnapshotRequest;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionMapSnapshot : NSObject <Swift>

{
    _Bool _isFocusedRectEmpty;
    _Bool _didSetRegionClipFrame;
    struct CGRect _regionClipFrame;
    _Bool _committed;
    _Bool _privateSnaphot;
    _Bool _clipToSnapshotRect;
    UIImage *_visualRepresentation;
    _UIFocusRegionMapSnapshotRequest *_request;
    UIView *_rootView;
    NSArray *_sortedFocusContainerGuideMapEntries;
    NSMutableArray *_detectedFocusableViewMapEntries;
    NSMutableArray *_detectedFocusableGuideMapEntries;
    NSMutableArray *_detectedFocusContainerGuideMapEntries;
    NSMutableArray *_retainedPromiseRegions;
    unsigned long long _focusHeading;
    UIView *_focusableRegionAncestorView;
    NSArray *_finalFocusableRegionMapEntries;
    struct CGPoint _visualRepresentationScreenCenter;
    struct CGRect _mapEntriesFrame;
    struct CGRect _snapshottedRect;
    struct CGRect _focusedRect;
    struct CGRect _visualRepresentationMinimumArea;
}

@property (retain, nonatomic) NSMutableArray *detectedFocusableViewMapEntries;
@property (retain, nonatomic) NSMutableArray *detectedFocusableGuideMapEntries;
@property (retain, nonatomic) NSMutableArray *detectedFocusContainerGuideMapEntries;
@property (retain, nonatomic) NSMutableArray *retainedPromiseRegions;
@property (nonatomic, getter=isCommitted) _Bool committed;
@property (nonatomic) struct CGRect focusedRect;
@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic) _Bool clipToSnapshotRect;
@property (nonatomic) struct CGRect visualRepresentationMinimumArea;
@property (weak, nonatomic) UIView *focusableRegionAncestorView;
@property (nonatomic, readonly) struct CGRect mapEntriesFrame;
@property (nonatomic) struct CGPoint visualRepresentationScreenCenter;
@property (copy, nonatomic) NSArray *finalFocusableRegionMapEntries;
@property (copy, nonatomic) NSArray *sortedFocusContainerGuideMapEntries;
@property (copy, nonatomic, readonly) _UIFocusRegionMapSnapshotRequest *request;
@property (weak, nonatomic, readonly) UIView *rootView;
@property (nonatomic, readonly) struct CGRect snapshottedRect;
@property (nonatomic, getter=isPrivateSnapshot) _Bool privateSnaphot;
@property (copy, nonatomic, readonly) NSArray *allFocusableRegionMapEntries;
@property (nonatomic, readonly) UIImage *visualRepresentation;

+ (id)combinedVisualRepresentationForSnapshots:(id)arg1 scaleFactor:(double)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)focusableRegionMapEntriesLimitedByFocusContainerGuide:(id)arg1;
- (id)_snapshotByFulfillingPromiseFocusRegionEntry:(id)arg1;
- (void)_didChooseFocusCandidateRegion:(id)arg1;
- (id)_initWithRequest:(id)arg1;
- (void)_commit;
- (struct CGRect)_clippedRegionFrame:(struct CGRect)arg1 isFocusGuide:(_Bool)arg2;
- (void)_punchHoleInMap:(id)arg1 atFrame:(struct CGRect)arg2;
- (id)_finalFocusableRegionMapEntriesFromMapEntries:(id)arg1;
- (id)_finalFocusableRegionMapEntriesFromViewMapEntries:(id)arg1 guideMapEntries:(id)arg2;
- (id)_sortedEligibleFocusContainerGuidesInArray:(id)arg1;
- (void)_updateFinalFocusableRegionMapEntries;
- (void)_updateSortedFocusContainerGuideMapEntries;
- (void)_occludeFocusInFrame:(struct CGRect)arg1;
- (id)visualRepresentationWithMinimumArea:(struct CGRect)arg1;
- (void)_addFocusableRegion:(id)arg1 isFocusGuide:(_Bool)arg2 withFrame:(struct CGRect)arg3;
- (void)_addFocusContainerGuide:(id)arg1 withFrame:(struct CGRect)arg2;

@end
