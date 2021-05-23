/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBLocation;

@protocol _INPBStartPhotoPlaybackIntentResponse <Swift>

@property (copy, nonatomic) NSString *albumName;
@property (nonatomic, readonly) _Bool hasAlbumName;
@property (retain, nonatomic) _INPBLocation *locationCreated;
@property (nonatomic, readonly) _Bool hasLocationCreated;
@property (nonatomic) int searchResultsCount;
@property (nonatomic) _Bool hasSearchResultsCount;

@end
