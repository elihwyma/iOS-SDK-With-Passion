/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class NSArray, TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIMediaTagsViewLayout : TVViewLayout

{
    unsigned long long _type;
    VUITextLayout *_textLayout;
    VUITextLayout *_rentalExpirationTextLayout;
    NSArray *_groupedKeys;
    TVImageLayout *_badgeImageLayout;
    struct UIEdgeInsets _groupMargin;
    struct UIEdgeInsets _commonSenseMargin;
    struct UIEdgeInsets _tomatoMeterMargin;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) VUITextLayout *textLayout;
@property (nonatomic, readonly) VUITextLayout *rentalExpirationTextLayout;
@property (nonatomic, readonly) NSArray *groupedKeys;
@property (nonatomic, readonly) struct UIEdgeInsets groupMargin;
@property (nonatomic, readonly) TVImageLayout *badgeImageLayout;
@property (nonatomic, readonly) struct UIEdgeInsets commonSenseMargin;
@property (nonatomic, readonly) struct UIEdgeInsets tomatoMeterMargin;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;
- (id)initWithType:(unsigned long long)arg1;

@end
