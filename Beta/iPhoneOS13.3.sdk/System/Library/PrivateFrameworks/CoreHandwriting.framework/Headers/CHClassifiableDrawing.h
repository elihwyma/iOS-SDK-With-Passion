/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHDrawing, NSCharacterSet;

@interface CHClassifiableDrawing : NSObject

{
    _Bool _expandCodePoints;
    _Bool _firstPointIsSubstrokeCut;
    _Bool _lastPointIsSubstrokeCut;
    CHDrawing *_drawing;
    NSCharacterSet *_characterSet;
    unsigned long long _maxCandidateCount;
    struct CGRect _normalizationContext;
}

@property (retain, nonatomic, readonly) CHDrawing *drawing;
@property (retain, nonatomic, readonly) NSCharacterSet *characterSet;
@property (nonatomic, readonly) _Bool expandCodePoints;
@property (nonatomic, readonly) struct CGRect normalizationContext;
@property (nonatomic, readonly) _Bool firstPointIsSubstrokeCut;
@property (nonatomic, readonly) _Bool lastPointIsSubstrokeCut;
@property (nonatomic, readonly) unsigned long long maxCandidateCount;

- (void)dealloc;
- (id)initWithDrawing:(id)arg1 characterSet:(id)arg2 expandCodePoints:(_Bool)arg3 normalizationContext:(struct CGRect)arg4 firstPointIsSubstrokeCut:(_Bool)arg5 lastPointIsSubstrokeCut:(_Bool)arg6 maxCandidateCount:(unsigned long long)arg7;

@end
