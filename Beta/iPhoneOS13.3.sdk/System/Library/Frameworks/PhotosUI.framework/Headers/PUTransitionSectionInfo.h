/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexPath, NSIndexSet;

__attribute__((visibility("hidden")))
@interface PUTransitionSectionInfo : NSObject

{
    long long _transitionSection;
    NSIndexSet *_visualSections;
    NSArray *_visualRowStartMarkers;
    long long _contiguousRows;
    NSIndexPath *_anchorRealPath;
    struct PUGridCoordinates _anchorShiftOffset;
}

@property (nonatomic) long long transitionSection;
@property (retain, nonatomic) NSIndexSet *visualSections;
@property (retain, nonatomic) NSArray *visualRowStartMarkers;
@property (nonatomic) long long contiguousRows;
@property (retain, nonatomic) NSIndexPath *anchorRealPath;
@property (nonatomic) struct PUGridCoordinates anchorShiftOffset;

- (id)init;
- (id)description;

@end
