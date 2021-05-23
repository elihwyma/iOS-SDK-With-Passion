/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXTextExclusionPath, TSDWrapPolygon;

@interface SXTextExclusionPathWrapper : NSObject

{
    _Bool _isRectangular;
    SXTextExclusionPath *_exclusionPath;
    TSDWrapPolygon *_myWrapPolygon;
}

@property (nonatomic, readonly) _Bool isRectangular;
@property (nonatomic, readonly) TSDWrapPolygon *myWrapPolygon;
@property (weak, nonatomic, readonly) SXTextExclusionPath *exclusionPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasAlpha;

- (id)parent;
- (id)wrapPolygon;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (struct CGRect)boundsInRoot;
- (id)initWithTextExclusionPath:(id)arg1;
- (_Bool)isHTMLWrap;
- (int)wrapType;
- (int)wrapDirection;
- (int)wrapFitType;

@end
