/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TDPackerNode : NSObject

{
    _Bool _used;
    _Bool _fit;
    _TDPackerNode *_down;
    _TDPackerNode *_right;
    void *_node;
    struct CGSize _size;
    struct CGPoint _origin;
}

@property (nonatomic) _Bool used;
@property (retain, nonatomic) _TDPackerNode *down;
@property (retain, nonatomic) _TDPackerNode *right;
@property (nonatomic) _Bool fit;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CGPoint origin;
@property (nonatomic) void *node;

- (void)dealloc;

@end
