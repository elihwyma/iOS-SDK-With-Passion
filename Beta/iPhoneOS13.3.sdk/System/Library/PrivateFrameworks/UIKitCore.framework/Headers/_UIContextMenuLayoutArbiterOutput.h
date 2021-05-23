/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLayoutArbiterOutput : NSObject

{
    NSMapTable *_accessoryPositions;
    CDStruct_6f807b77 _anchor;
    struct CGRect _contentBounds;
    struct CGRect _previewFrame;
    struct CGRect _menuFrame;
}

@property (nonatomic) struct CGRect contentBounds;
@property (nonatomic) struct CGRect previewFrame;
@property (nonatomic) struct CGRect menuFrame;
@property (nonatomic) CDStruct_6f807b77 anchor;
@property (retain, nonatomic) NSMapTable *accessoryPositions;

@end
