/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class FCThreadSafeMutableDictionary;

@interface NFLFontCache : NSObject

{
    FCThreadSafeMutableDictionary *_fontCache;
}

@property (retain, nonatomic) FCThreadSafeMutableDictionary *fontCache;

- (id)init;
- (void)clearCache;
- (id)fontWithName:(id)arg1 size:(double)arg2;

@end
