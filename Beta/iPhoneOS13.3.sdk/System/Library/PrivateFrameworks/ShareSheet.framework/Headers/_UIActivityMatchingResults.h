/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, _UIActivityMatchingContext;

@interface _UIActivityMatchingResults : NSObject

{
    NSMutableSet *_excludedActivityTypesSet;
    _UIActivityMatchingContext *_context;
    NSArray *_orderedActivities;
}

@property (retain, nonatomic) NSArray *orderedActivities;
@property (nonatomic, readonly) _UIActivityMatchingContext *context;
@property (nonatomic, readonly) NSArray *excludedActivityTypes;

- (void)addExcludedActivityTypes:(id)arg1;
- (id)initWithActivityMatchingContext:(id)arg1;

@end
