//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTCoreModelRowOptions, NSArray, NSString;

@interface AVTCoreModelColorPalette : NSObject
{
    BOOL _alwaysShowExtended;
    NSString *_identifier;
    NSString *_title;
    AVTCoreModelRowOptions *_options;
    NSArray *_primaryColors;
    NSArray *_extendedColors;
    long long _colorCategory;
}

@property(readonly, nonatomic) long long colorCategory; // @synthesize colorCategory=_colorCategory;
@property(readonly, nonatomic) BOOL alwaysShowExtended; // @synthesize alwaysShowExtended=_alwaysShowExtended;
@property(readonly, nonatomic) NSArray *extendedColors; // @synthesize extendedColors=_extendedColors;
@property(readonly, nonatomic) NSArray *primaryColors; // @synthesize primaryColors=_primaryColors;
@property(readonly, nonatomic) AVTCoreModelRowOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)description;
- (id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 identifier:(id)arg4 alwaysShowExtended:(BOOL)arg5 colorCategory:(long long)arg6 options:(id)arg7;
- (id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 alwaysShowExtended:(BOOL)arg4 colorCategory:(long long)arg5 options:(id)arg6;

@end

