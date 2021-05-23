/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAMPMediaEntity.h>

@class NSNumber, NSString, SACalendar, SAMPReleaseInfo;

@interface SAMPMediaItem : SAMPMediaEntity

@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *artist;
@property (retain, nonatomic) SACalendar *datePurchased;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSNumber *perceivableStartTimeInSeconds;
@property (retain, nonatomic) SAMPReleaseInfo *releaseInfo;
@property (copy, nonatomic) NSString *sortAlbum;
@property (copy, nonatomic) NSString *sortArtist;

+ (id)mediaItem;
+ (id)mediaItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
