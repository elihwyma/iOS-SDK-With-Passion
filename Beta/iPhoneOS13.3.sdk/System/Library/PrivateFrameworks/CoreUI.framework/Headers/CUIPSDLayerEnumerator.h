/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSEnumerator.h>

@class CUIPSDLayerGroupRef;

@interface CUIPSDLayerEnumerator : NSEnumerator

{
    CUIPSDLayerGroupRef *_layerGroup;
    unsigned int _currentIndex;
    _Bool _isImageFile;
}

+ (id)enumeratorWithPSDLayerGroup:(id)arg1;
+ (id)enumeratorWithPSDImage:(id)arg1;

- (void)dealloc;
- (id)nextObject;
- (id)allObjects;
- (id)initWithPSDLayerGroup:(id)arg1;
- (id)initWithPSDImage:(id)arg1;

@end
