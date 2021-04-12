//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPPointUnit, LPTextViewStyle, UIColor;

__attribute__((visibility("hidden")))
@interface LPTapToLoadViewStyle : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_tapHighlightColor;
    LPTextViewStyle *_caption;
    LPPointUnit *_width;
    LPPointUnit *_height;
}

@property(retain, nonatomic) LPPointUnit *height; // @synthesize height=_height;
@property(retain, nonatomic) LPPointUnit *width; // @synthesize width=_width;
@property(readonly, nonatomic) LPTextViewStyle *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) UIColor *tapHighlightColor; // @synthesize tapHighlightColor=_tapHighlightColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
// - (void).cxx_destruct;
- (id)initWithPlatform:(long long)arg1;

@end

