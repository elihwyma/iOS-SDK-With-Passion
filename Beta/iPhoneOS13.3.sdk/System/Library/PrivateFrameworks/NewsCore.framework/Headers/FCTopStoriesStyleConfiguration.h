/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCColor, NSDictionary, NSString, NTPBTopStoriesStyleConfig;

@interface FCTopStoriesStyleConfiguration : NSObject

{
    NTPBTopStoriesStyleConfig *_pbConfig;
    NSDictionary *_configDict;
    unsigned long long _storyType;
    NSString *_label;
    FCColor *_foreground_color;
    FCColor *_dark_style_foreground_color;
    FCColor *_background_color;
    FCColor *_dark_style_background_color;
    NSString *_stringType;
}

@property (nonatomic, readonly) unsigned long long storyType;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) FCColor *foreground_color;
@property (nonatomic, readonly) FCColor *dark_style_foreground_color;
@property (nonatomic, readonly) FCColor *background_color;
@property (nonatomic, readonly) FCColor *dark_style_background_color;
@property (nonatomic, readonly) NSString *stringType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBTopStoriesStyleConfig:(id)arg1;

@end
