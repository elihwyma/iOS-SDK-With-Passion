/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTStickerRecentsLayout : NSObject

{
    _Bool _laysOutVertically;
    long long _numberOfItems;
    long long _numberOfItemsPerRow;
    long long _numberOfItemsPerColumn;
    long long _interitemPadding;
    long long _appButtonIndex;
}

@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) long long numberOfItemsPerRow;
@property (nonatomic, readonly) long long numberOfItemsPerColumn;
@property (nonatomic, readonly) long long interitemPadding;
@property (nonatomic, readonly) long long appButtonIndex;
@property (nonatomic, readonly) _Bool laysOutVertically;

+ (struct CGSize)buttonSizeForContainerSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNumberOfItemsPerRow:(long long)arg1 numberOfItemsPerColumn:(long long)arg2 interitemPadding:(double)arg3 appButtonIndex:(long long)arg4 laysOutVertically:(_Bool)arg5;

@end
