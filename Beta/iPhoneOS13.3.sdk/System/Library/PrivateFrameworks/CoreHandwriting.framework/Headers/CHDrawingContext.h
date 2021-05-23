/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHClassifiableDrawing;

@interface CHDrawingContext : NSObject

{
    unsigned long long _edgeIndex;
    long long _numberOfSubstrokes;
    long long _numberOfSegments;
    CHClassifiableDrawing *_classifiableDrawing;
    set_54c7c768 _strokeGroup;
    vector_afed86a5 _delayedSegmentIDs;
}

@property (nonatomic, readonly) unsigned long long edgeIndex;
@property (nonatomic, readonly) long long numberOfSubstrokes;
@property (nonatomic, readonly) long long numberOfSegments;
@property (retain, nonatomic, readonly) CHClassifiableDrawing *classifiableDrawing;
@property (nonatomic, readonly) set_54c7c768 strokeGroup;
@property (nonatomic, readonly) vector_afed86a5 delayedSegmentIDs;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithEdgeIndex:(unsigned long long)arg1 numberOfSubstrokes:(long long)arg2 numberOfSegments:(long long)arg3 classifiableDrawing:(id)arg4 strokeGroup:(set_54c7c768)arg5 delayedSegmentIDs:(vector_afed86a5)arg6;

@end
