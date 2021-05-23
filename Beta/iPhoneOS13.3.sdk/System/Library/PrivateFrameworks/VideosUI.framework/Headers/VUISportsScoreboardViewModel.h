/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUISportsScoreboardViewModel : NSObject

{
    _Bool _showScoreboard;
    NSString *_canonicalId;
    NSDictionary *_leagueContext;
    NSArray *_scores;
}

@property (nonatomic, readonly) NSString *canonicalId;
@property (nonatomic, readonly) NSDictionary *leagueContext;
@property (nonatomic, readonly) NSArray *scores;
@property (nonatomic, readonly) _Bool showScoreboard;

- (id)initWithDictionary:(id)arg1;
- (id)jsContextDictionary;

@end
