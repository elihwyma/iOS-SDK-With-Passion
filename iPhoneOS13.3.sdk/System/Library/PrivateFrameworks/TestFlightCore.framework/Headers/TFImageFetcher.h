//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TFImageFetcher : NSObject
{
    double _displayedScreenScale;
}

@property(readonly, nonatomic) double displayedScreenScale; // @synthesize displayedScreenScale=_displayedScreenScale;
- (id)_urlStringForIconArtwork:(id)arg1 ofSize:(CGSize)arg2 fileFormat:(id)arg3;
- (void)fetchIconArtwork:(id)arg1 ofSize:(CGSize)arg2 intoView:(id)arg3 animated:(BOOL)arg4;
- (id)init;

@end

