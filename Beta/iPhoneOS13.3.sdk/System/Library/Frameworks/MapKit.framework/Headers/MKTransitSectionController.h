/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapItem, MKTransitSectionPagingFilter, NSDate, NSSet;

@protocol GEOTransitSystem;

__attribute__((visibility("hidden")))
@interface MKTransitSectionController : NSObject

{
    MKMapItem *_mapItem;
    MKTransitSectionPagingFilter *__pagingFilter;
    NSSet *_linesToShow;
    unsigned long long _numberOfRows;
    unsigned long long _numberOfFilteredRows;
    unsigned long long _numberOfFilteredLines;
    _Bool _needsBuildRows;
    id <GEOTransitSystem> _system;
    NSDate *_departureCutoffDate;
    NSDate *_expiredHighFrequencyCutoffDate;
    NSSet *_incidentEntitiesToExclude;
}

@property (nonatomic, readonly) id <GEOTransitSystem> system;
@property (retain, nonatomic) NSDate *departureCutoffDate;
@property (retain, nonatomic) NSDate *expiredHighFrequencyCutoffDate;
@property (retain, nonatomic) NSSet *incidentEntitiesToExclude;
@property (nonatomic, readonly) unsigned long long numberOfFilteredLines;
@property (nonatomic, readonly) MKTransitSectionPagingFilter *_pagingFilter;

- (id)init;
- (unsigned long long)numberOfRows;
- (void)_setNeedsBuildRows;
- (_Bool)_needsBuildRows;
- (void)_buildRows;
- (id)initWithMapItem:(id)arg1 system:(id)arg2;
- (void)incrementPagingFilter;
- (_Bool)hasFilteredRows;
- (_Bool)hasFilteredLines;
- (id)linesToShow;

@end
