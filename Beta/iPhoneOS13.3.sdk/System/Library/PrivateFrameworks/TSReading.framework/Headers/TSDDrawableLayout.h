/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDLayout.h>

@class NSString, TSDBezierPath, TSDWrapPolygon;

@interface TSDDrawableLayout : TSDLayout

{
    TSDWrapPolygon *mCachedWrapPolygon;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasAlpha;

- (void)dealloc;
- (void)invalidate;
- (void)setGeometry:(id)arg1;
- (id)wrapPolygon;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (struct CGRect)boundsInRoot;
- (_Bool)isHTMLWrap;
- (int)wrapType;
- (int)wrapDirection;
- (int)wrapFitType;
- (id)i_computeWrapPath;
- (id)i_wrapPath;
- (void)invalidateParentForWrap;
- (void)dragBy:(struct CGPoint)arg1;
- (void)invalidateExteriorWrap;
- (void)processChangedProperty:(int)arg1;
- (void)parentDidChange;
- (void)i_invalidateWrap;
- (id)i_computeWrapPathClosed:(_Bool)arg1;
- (id)i_externalWrapPath;
- (_Bool)allowsConnections;
- (_Bool)supportsInspectorPositioning;

@end
