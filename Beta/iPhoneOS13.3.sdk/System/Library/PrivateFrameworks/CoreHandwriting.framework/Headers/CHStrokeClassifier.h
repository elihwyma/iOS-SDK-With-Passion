/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHStrokeClassificationResult;

@protocol CHStrokeProvider;

@interface CHStrokeClassifier : NSObject

{
    _Bool _textOnly;
    id <CHStrokeProvider> _strokeProvider;
    CHStrokeClassificationResult *_strokeClassificationLastResult;
}

@property (retain, nonatomic, readonly) id <CHStrokeProvider> strokeProvider;
@property (retain, nonatomic, readonly) CHStrokeClassificationResult *strokeClassificationLastResult;
@property (nonatomic, readonly) _Bool textOnly;

+ (id)nonTextCandidateForStroke:(id)arg1 withSubstrokes:(id)arg2;
+ (double)containerSupportForPoints:(const vector_2e7754b6 *)arg1 withBounds:(struct CGRect)arg2;

- (void)dealloc;
- (id)updatedStrokeClassificationResultByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 clutterFilter:(id)arg3 affectedClutterStrokeIDs:(id)arg4 cancellationBlock:(CDUnknownBlockType)arg5;
- (id)initWithStrokeProvider:(id)arg1 strokeClassificationLastResult:(id)arg2 textOnly:(_Bool)arg3;

@end
