/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, _UIVectorTextLayoutInfo, _UIVectorTextLayoutParameters;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayout : NSObject

{
    NSArray *_runs;
    unsigned long long _numberOfLines;
    struct CGRect _boundingRect;
    struct CGRect _usedBoundingRect;
    struct _NSRange _fitRange;
    double _firstLineBaseline;
    double _lastLineBaseline;
    _UIVectorTextLayoutInfo *_layoutInfo;
    struct CGAffineTransform _coordinateAdjustment;
}

@property (copy, nonatomic, readonly) _UIVectorTextLayoutParameters *parameters;
@property (nonatomic, readonly) struct CGRect boundingRect;
@property (nonatomic, readonly) struct CGRect usedBoundingRect;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct _NSRange textRange;
@property (nonatomic, readonly) unsigned long long numberOfLines;
@property (nonatomic, readonly) unsigned long long numberOfRuns;
@property (nonatomic, readonly) double firstLineBaseline;
@property (nonatomic, readonly) double lastLineBaseline;
@property (nonatomic, readonly) struct CGAffineTransform coordinateAdjustment;

- (id)description;
- (id)initWithTextParameters:(id)arg1;
- (void)enumerateRunsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_layoutIfNeeded;
- (_Bool)hasLayout;
- (void)resetLayout;
- (id)layoutDescription;

@end
