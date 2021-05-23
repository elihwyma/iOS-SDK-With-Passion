/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSString, WLKRottenTomatoesRating;

@interface WLKBasicMovieMetadata : WLKBasicContentMetadata

{
    NSString *_studio;
    WLKRottenTomatoesRating *_rottenTomatoesRating;
    double _duration;
    NSDate *_releaseDate;
}

@property (copy, nonatomic, readonly) NSString *studio;
@property (nonatomic, readonly) WLKRottenTomatoesRating *rottenTomatoesRating;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *releaseDate;

- (id)initWithDictionary:(id)arg1;

@end
