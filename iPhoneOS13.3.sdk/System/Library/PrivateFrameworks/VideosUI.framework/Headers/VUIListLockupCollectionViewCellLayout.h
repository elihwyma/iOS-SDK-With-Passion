//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIListLockupCollectionViewCellLayout : TVViewLayout
{
    long long _imagePosition;
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    VUITextLayout *_descriptionTextLayout;
    TVImageLayout *_imageLayout;
    TVImageLayout *_appIconLayout;
    TVImageLayout *_monogramImageLayout;
}

+ (CGSize)_defaultAppIconSize;
+ (CGSize)_defaultImageSize;
+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(retain, nonatomic) TVImageLayout *monogramImageLayout; // @synthesize monogramImageLayout=_monogramImageLayout;
@property(retain, nonatomic) TVImageLayout *appIconLayout; // @synthesize appIconLayout=_appIconLayout;
@property(retain, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property(retain, nonatomic) VUITextLayout *descriptionTextLayout; // @synthesize descriptionTextLayout=_descriptionTextLayout;
@property(retain, nonatomic) VUITextLayout *subtitleTextLayout; // @synthesize subtitleTextLayout=_subtitleTextLayout;
@property(retain, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
// - (void).cxx_destruct;
- (id)init;

@end

