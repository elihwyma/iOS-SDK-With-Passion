/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSString;

@interface WLKBasicSportingEventMetadata : WLKBasicContentMetadata

{
    NSDate *_startGameTime;
    NSString *_leagueName;
    NSString *_leagueShortName;
}

@property (copy, nonatomic, readonly) NSDate *startGameTime;
@property (copy, nonatomic, readonly) NSString *leagueName;
@property (copy, nonatomic, readonly) NSString *leagueShortName;

- (id)initWithDictionary:(id)arg1;

@end
