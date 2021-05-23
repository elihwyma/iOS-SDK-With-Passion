/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIVideoManagedObject.h>

@class NSNumber, VUITVSeasonManagedObject, VUITVSeriesManagedObject;

__attribute__((visibility("hidden")))
@interface VUITVEpisodeManagedObject : VUIVideoManagedObject

@property (copy, nonatomic) NSNumber *episodeNumberInSeason;
@property (copy, nonatomic) NSNumber *episodeNumberInSeries;
@property (retain, nonatomic) VUITVSeasonManagedObject *season;
@property (retain, nonatomic) VUITVSeriesManagedObject *series;

+ (id)fetchRequest;

@end
