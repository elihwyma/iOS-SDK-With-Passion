/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface AVTUIStickerPlaceholderProviderFactory : NSObject

{
    NSMutableArray *_queuedHandlers;
    CDUnknownBlockType _imageProvider;
}

@property (retain, nonatomic) NSMutableArray *queuedHandlers;
@property (nonatomic, readonly) CDUnknownBlockType imageProvider;

- (CDUnknownBlockType)placeholderProvider;
- (id)initWithImageProvider:(CDUnknownBlockType)arg1;

@end
