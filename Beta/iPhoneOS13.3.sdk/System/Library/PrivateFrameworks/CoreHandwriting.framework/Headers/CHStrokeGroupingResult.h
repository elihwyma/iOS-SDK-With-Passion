/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface CHStrokeGroupingResult : NSObject

{
    NSArray *_strokeGroupsSortedTopBottomLeftRight;
    NSArray *_textStrokeGroupsSortedByWritingOrientation;
    NSArray *_strokeGroupsSortedByWritingOrientation;
    NSSet *_textStrokeGroups;
    NSSet *_strokeGroups;
    NSSet *_createdStrokeGroups;
    NSSet *_deletedStrokeGroups;
}

@property (copy, nonatomic, readonly) NSSet *strokeGroups;
@property (copy, nonatomic, readonly) NSSet *createdStrokeGroups;
@property (copy, nonatomic, readonly) NSSet *deletedStrokeGroups;
@property (copy, nonatomic, readonly) NSArray *textStrokeGroupsSortedTopBottomLeftRight;
@property (copy, nonatomic, readonly) NSArray *textStrokeGroupsSortedByWritingOrientation;
@property (copy, nonatomic, readonly) NSArray *strokeGroupsSortedByWritingOrientation;
@property (copy, nonatomic, readonly) NSSet *textStrokeGroups;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3;
- (id)_sortedStrokeGroupsByWritingOrientationTextOnly:(_Bool)arg1;

@end
