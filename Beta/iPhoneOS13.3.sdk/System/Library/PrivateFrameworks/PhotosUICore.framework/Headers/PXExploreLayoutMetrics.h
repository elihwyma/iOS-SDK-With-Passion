/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutMetrics.h>

@class NSString;

@interface PXExploreLayoutMetrics : PXLayoutMetrics

{
    _Bool _allowHeaders;
    _Bool _allowSpecialPanoHeaders;
    long long _layoutType;
    long long _layoutSubtype;
    double _interitemSpacing;
    long long _largeHeroDensity;
    CDUnknownBlockType _acceptableLargeHeroPredicate;
    struct UIEdgeInsets _safeAreaInsets;
}

@property (nonatomic) struct UIEdgeInsets safeAreaInsets;
@property (nonatomic) long long layoutType;
@property (nonatomic) long long layoutSubtype;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long largeHeroDensity;
@property (copy, nonatomic) CDUnknownBlockType acceptableLargeHeroPredicate;
@property (nonatomic) _Bool allowHeaders;
@property (nonatomic) _Bool allowSpecialPanoHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *diagnosticDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)initWithUserInterfaceIdiom:(long long)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3 referenceSize:(struct CGSize)arg4 safeAreaInsets:(struct UIEdgeInsets)arg5;
- (id)initWithSpec:(id)arg1;

@end
