/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHStrokeGroup.h>

@interface CHTimeWindowStrokeGroup : CHStrokeGroup

{
    double _startTimestamp;
    double _endTimestamp;
}

@property (nonatomic, readonly) double startTimestamp;
@property (nonatomic, readonly) double endTimestamp;

- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect)arg4 startTimestamp:(double)arg5 endTimestamp:(double)arg6;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 startTimestamp:(double)arg6 endTimestamp:(double)arg7;

@end
