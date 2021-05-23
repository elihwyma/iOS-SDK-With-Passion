/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSWPRepTileGeometry : NSObject

{
    struct vector<TSWPRepBoundsAnalyzer::Info, std::__1::allocator<TSWPRepBoundsAnalyzer::Info>> _infos;
    _Bool _tileGeometryDirty;
    struct CGSize _maxTileSize;
}

@property (nonatomic) struct CGSize maxTileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool tileGeometryDirty;

- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)tileGeometryCountWithLayer:(id)arg1;
- (void)tileGeometryAddVisibileIndices:(id)arg1 withLayer:(id)arg2 visibleBounds:(struct CGRect)arg3;
- (void)tileGeometryConfigureWithLayer:(id)arg1 tileLayer:(id)arg2 atIndex:(unsigned long long)arg3;
- (struct CGRect)tileGeometryRectWithLayer:(id)arg1 atIndex:(unsigned long long)arg2 mask:(unsigned int *)arg3;
- (_Bool)updateWithLayer:(id)arg1 scale:(double)arg2 columns:(id)arg3;

@end
