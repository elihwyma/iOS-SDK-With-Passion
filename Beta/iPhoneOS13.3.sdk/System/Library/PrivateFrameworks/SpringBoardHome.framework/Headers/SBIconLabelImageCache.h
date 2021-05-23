/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class CPMemoryPool, NSMutableDictionary, NSString;

@interface SBIconLabelImageCache : NSObject

{
    NSMutableDictionary *_labelImages;
    double _scale;
    CPMemoryPool *_grayPool;
    CPMemoryPool *_colorPool;
    CPMemoryPool *_legibilityPool;
    struct CGSize _maxLabelSize;
}

@property (nonatomic, readonly) CPMemoryPool *grayPool;
@property (nonatomic, readonly) CPMemoryPool *colorPool;
@property (nonatomic, readonly) CPMemoryPool *legibilityPool;
@property (nonatomic, readonly) struct CGSize maxLabelSize;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) unsigned long long numberOfCacheHits;
@property (nonatomic, readonly) unsigned long long numberOfCacheMisses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithMaxLabelSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)removeLabelImagesWithParametersPassingTest:(CDUnknownBlockType)arg1;
- (id)labelImageForParameters:(id)arg1;
- (id)generateAndStoreLabelImageForParameters:(id)arg1;
- (id)cachedLabelImageForParameters:(id)arg1;
- (void)cacheLabelImageForParameters:(id)arg1;
- (void)removeLabelImageForParameters:(id)arg1;
- (id)cachedLabelImagesWithParametersPassingTest:(CDUnknownBlockType)arg1;

@end
