/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPNowPlayingInfoLanguageOption, NSArray;

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject

{
    void *_mrLanguageOptionGroup;
}

@property (nonatomic, readonly) void *mrLanguageOptionGroup;
@property (nonatomic, readonly) NSArray *languageOptions;
@property (nonatomic, readonly) MPNowPlayingInfoLanguageOption *defaultLanguageOption;
@property (nonatomic, readonly) _Bool allowEmptySelection;

- (void)dealloc;
- (id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowEmptySelection:(_Bool)arg3;
- (id)initWithMRLanguageOptionGroup:(void *)arg1;

@end
