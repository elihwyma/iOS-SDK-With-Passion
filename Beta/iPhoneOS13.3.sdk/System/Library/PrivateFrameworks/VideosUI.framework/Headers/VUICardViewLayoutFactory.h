/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUICardViewLayout;

__attribute__((visibility("hidden")))
@interface VUICardViewLayoutFactory : NSObject

{
    VUICardViewLayout *_phoneLayout;
    VUICardViewLayout *_padLayout;
    VUICardViewLayout *_tvLayout;
    long long _cardLayoutType;
    long long _gridStyle;
    long long _gridType;
}

@property (nonatomic, readonly) long long cardLayoutType;
@property (nonatomic, readonly) long long gridStyle;
@property (nonatomic, readonly) long long gridType;

+ (id)cardViewFactoryForType:(long long)arg1 gridStyle:(long long)arg2 gridType:(long long)arg3;

- (id)activeLayout;
- (id)initWithCardLayoutType:(long long)arg1 gridStyle:(long long)arg2 gridType:(long long)arg3;
- (id)_layoutForCardLayoutType:(long long)arg1 interfaceIdiom:(long long)arg2;
- (id)featuredCardViewLayoutForIdiom:(long long)arg1;
- (id)upnextCardViewLayoutForIdiom:(long long)arg1;
- (id)standardCardViewLayoutForIdiom:(long long)arg1;
- (id)editorialCardViewLayout;
- (id)videoLockupCardViewLayout;
- (id)shadowForCardImageLayout;

@end
