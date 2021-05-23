/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface PLHighlightHierarchy : NSObject

{
    NSMutableSet *_moments;
    NSMutableSet *_dayHighlights;
    NSMutableSet *_dayGroupHighlights;
}

@property (nonatomic, readonly) NSMutableSet *moments;
@property (nonatomic, readonly) NSMutableSet *dayHighlights;
@property (nonatomic, readonly) NSMutableSet *dayGroupHighlights;

- (id)init;
- (void)addMoment:(id)arg1;
- (void)addDayHighlight:(id)arg1;
- (void)addDayGroupHighlight:(id)arg1;
- (void)_addMoment:(id)arg1;
- (void)_addDayHighlight:(id)arg1;

@end
