/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class MSSticker, NSString;

@interface AVTUIStickerItem : NSObject <Swift>

{
    _Bool _hasBeenRendered;
    CDUnknownBlockType discardableContentHandler;
    NSString *_localizedName;
    MSSticker *_cachedMSSticker;
    CDUnknownBlockType _resourceProvider;
    struct CGRect _clippingRect;
}

@property (copy, nonatomic, readonly) NSString *localizedName;
@property (retain, nonatomic) MSSticker *cachedMSSticker;
@property (nonatomic) _Bool hasBeenRendered;
@property (nonatomic) struct CGRect clippingRect;
@property (copy, nonatomic, readonly) CDUnknownBlockType resourceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType discardableContentHandler;

- (void)clearCachedItems;
- (void)discardContent;
- (id)initWithLocalizedName:(id)arg1 resourceProvider:(CDUnknownBlockType)arg2;

@end
