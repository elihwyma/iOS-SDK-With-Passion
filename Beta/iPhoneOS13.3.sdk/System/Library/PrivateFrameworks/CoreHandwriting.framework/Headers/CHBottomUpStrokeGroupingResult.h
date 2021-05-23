/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSDictionary;

@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult

{
    NSDictionary *_substrokePlacementsByStrokeIdentifier;
}

@property (retain, nonatomic, readonly) NSDictionary *substrokePlacementsByStrokeIdentifier;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 substrokePlacementsByStrokeIdentifier:(id)arg4;

@end
