/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class NSArray, _TDPackerNode;

@interface TDPacker : NSObject

{
    CDUnknownBlockType _sizeHandler;
    NSArray *_objectsToPack;
    _TDPackerNode *_root;
    NSArray *_packedObjects;
}

@property (retain) _TDPackerNode *root;
@property (retain) NSArray *packedObjects;
@property (retain, nonatomic) NSArray *objectsToPack;
@property (nonatomic, readonly) unsigned long long countOfEmptyNodes;

- (void)dealloc;
- (id)_findNode:(id)arg1 ofSize:(struct CGSize)arg2;
- (id)_splitNode:(id)arg1 toSize:(struct CGSize)arg2;
- (id)_growNodeToSize:(struct CGSize)arg1;
- (void)_countOfEmptyNodes:(id)arg1 count:(unsigned long long *)arg2;
- (id)_growRight:(struct CGSize)arg1;
- (id)_growDown:(struct CGSize)arg1;
- (void)setSizeHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)sizeHandler;
- (void)pack;
- (struct CGSize)enclosingSize;
- (_Bool)objectAtIndexFit:(long long)arg1;
- (struct CGPoint)fitPositionOfObjectAtIndex:(long long)arg1;

@end
