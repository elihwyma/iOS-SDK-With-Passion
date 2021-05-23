/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet;

@protocol PXTilingControllerPreheatHandler;

@interface PXTilingControllerPreheatRecord : NSObject

{
    id <PXTilingControllerPreheatHandler> _preheatHandler;
    void *_context;
    unsigned long long _tileGroup;
    NSIndexSet *_preheatedTileIndexes;
    struct UIEdgeInsets _padding;
}

@property (weak, nonatomic, readonly) id <PXTilingControllerPreheatHandler> preheatHandler;
@property (nonatomic, readonly) void *context;
@property (nonatomic) unsigned long long tileGroup;
@property (nonatomic) struct UIEdgeInsets padding;
@property (retain, nonatomic) NSIndexSet *preheatedTileIndexes;

- (id)initWithPreheatHandler:(id)arg1 context:(void *)arg2;

@end
