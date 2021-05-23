/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CHStrokeProvider;

@interface CHStrokeGroupingStrategy : NSObject

{
    id <CHStrokeProvider> _strokeProvider;
}

@property (retain, nonatomic, readonly) id <CHStrokeProvider> strokeProvider;
@property (retain, nonatomic, readonly) NSString *strategyIdentifier;

- (void)dealloc;
- (void)getFirstStrokeIdentifier:(id *)arg1 lastStrokeIdentifier:(id *)arg2 inGroup:(id)arg3 addingStrokeIdentifiers:(id)arg4 removingStrokeIdentifiers:(id)arg5;
- (id)initWithStrokeProvider:(id)arg1;
- (id)strokesForIdentifiers:(id)arg1;
- (id)strokeGroupFromGroup:(id)arg1 addingStrokes:(id)arg2;
- (id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(CDUnknownBlockType)arg6;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector)arg2 originalDrawing:(id *)arg3 orderedStrokesIDs:(id *)arg4 rescalingFactor:(double *)arg5;

@end
