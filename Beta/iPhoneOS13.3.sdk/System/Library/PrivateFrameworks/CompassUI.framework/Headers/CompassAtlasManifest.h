/*
 Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

#import <Foundation/NSObject.h>

@class CompassImageNode, NSMutableDictionary;

@interface CompassAtlasManifest : NSObject

{
    CompassImageNode *_rootNode;
    NSMutableDictionary *_items;
    struct CGSize _size;
}

@property (nonatomic, readonly) struct CGSize size;

- (id)initWithSize:(struct CGSize)arg1;
- (struct CGRect)addItem:(id)arg1 size:(struct CGSize)arg2;
- (struct CGRect)boundsForItem:(id)arg1;

@end
