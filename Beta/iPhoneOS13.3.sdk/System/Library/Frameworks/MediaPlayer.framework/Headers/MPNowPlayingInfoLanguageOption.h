/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MPNowPlayingInfoLanguageOption : NSObject

{
    void *_mrLanguageOption;
}

@property (nonatomic, readonly) void *mrLanguageOption;
@property (nonatomic, readonly) unsigned long long languageOptionType;
@property (nonatomic, readonly) NSString *languageTag;
@property (nonatomic, readonly) NSArray *languageOptionCharacteristics;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *identifier;

- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5;
- (id)initWithMRLanguageOption:(void *)arg1;
- (_Bool)isAutomaticLegibleLanguageOption;
- (_Bool)isAutomaticAudibleLanguageOption;
- (id)copyExternalRepresentation;
- (_Bool)isEqualToLanguageOption:(id)arg1;

@end
