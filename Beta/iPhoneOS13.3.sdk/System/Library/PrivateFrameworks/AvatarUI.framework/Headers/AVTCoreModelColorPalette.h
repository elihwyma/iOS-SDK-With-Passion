/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTCoreModelRowOptions, NSArray, NSString;

@interface AVTCoreModelColorPalette : NSObject

{
    _Bool _alwaysShowExtended;
    NSString *_identifier;
    NSString *_title;
    AVTCoreModelRowOptions *_options;
    NSArray *_primaryColors;
    NSArray *_extendedColors;
    long long _colorCategory;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) AVTCoreModelRowOptions *options;
@property (nonatomic, readonly) NSArray *primaryColors;
@property (nonatomic, readonly) NSArray *extendedColors;
@property (nonatomic, readonly) _Bool alwaysShowExtended;
@property (nonatomic, readonly) long long colorCategory;

- (id)description;
- (_Bool)isEmpty;
- (id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 alwaysShowExtended:(_Bool)arg4 colorCategory:(long long)arg5 options:(id)arg6;
- (id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 identifier:(id)arg4 alwaysShowExtended:(_Bool)arg5 colorCategory:(long long)arg6 options:(id)arg7;

@end
