/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKTransitSectionController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKTransitInactiveLinesSectionController : MKTransitSectionController

{
    NSArray *_inactiveLines;
}

@property (nonatomic, readonly) NSArray *inactiveLines;

- (id)init;
- (void)_setNeedsBuildRows;
- (id)_pagingFilter;
- (void)_buildRows;

@end
