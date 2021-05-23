/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MKQuadTrie : NSObject

{
    unsigned int _maxItems;
    CDStruct_8caa76fc _minSize;
    CDStruct_02837cd9 _initialRegion;
    void *__root;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (_Bool)remove:(id)arg1;
- (_Bool)contains:(id)arg1;
- (id)allItems;
- (id)initWithInitialRegion:(CDStruct_02837cd9)arg1 minimumSize:(CDStruct_c3b9c2ee)arg2 maximumItems:(unsigned int)arg3;
- (void)foreach:(CDUnknownBlockType)arg1;
- (void)insert:(id)arg1;
- (id)itemsInMapRect:(CDStruct_02837cd9)arg1;
- (id)itemsPassingRectTest:(CDUnknownBlockType)arg1 coordinateTest:(CDUnknownBlockType)arg2;
- (void)clearAllItemsPerforming:(CDUnknownBlockType)arg1;
- (id)_itemsInMapRect:(CDStruct_02837cd9)arg1;
- (id)breadthFirstDescription;
- (id)depthFirstDescription;
- (id)itemDescriptions;

@end
