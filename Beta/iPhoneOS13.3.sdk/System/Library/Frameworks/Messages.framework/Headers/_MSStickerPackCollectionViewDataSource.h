/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface _MSStickerPackCollectionViewDataSource : NSObject

{
    long long _stickerSize;
    NSMutableArray *_stickers;
}

@property (nonatomic, readonly) NSMutableArray *stickers;
@property (nonatomic, readonly) long long stickerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_stickerSizeFromString:(id)arg1;

- (long long)numberOfStickersInStickerBrowserView:(id)arg1;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2;
- (void)_loadStickerPackWithURL:(id)arg1;
- (id)initWithStickerPackURL:(id)arg1;
- (id)_allStickers;

@end
