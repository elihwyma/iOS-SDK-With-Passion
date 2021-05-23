/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, _UIFocusSearchInfo;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSearchInfo : NSObject

{
    _Bool _didFindFocusBlockingBoundary;
    NSMutableArray *_mutableSnapshots;
    NSMutableArray *_mutableDestinationRegions;
    _UIFocusSearchInfo *_searchInfo;
}

@property (retain, nonatomic) NSMutableArray *mutableSnapshots;
@property (retain, nonatomic) NSMutableArray *mutableDestinationRegions;
@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo;
@property (nonatomic) _Bool didFindFocusBlockingBoundary;
@property (copy, nonatomic, readonly) NSArray *snapshots;
@property (copy, nonatomic, readonly) NSArray *destinationRegions;

- (id)init;
- (void)addSnapshot:(id)arg1;
- (void)addDestinationRegion:(id)arg1;

@end
