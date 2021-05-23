/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString, SACalendar, SAMPPlaybackInfo;

@interface SAMPMediaEntity : SADomainObject

@property (copy, nonatomic) NSString *adamIdentifier;
@property (copy, nonatomic) NSString *brandIdentifier;
@property (retain, nonatomic) SACalendar *dateAdded;
@property (nonatomic) _Bool explicit;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *mediaType;
@property (retain, nonatomic) SAMPPlaybackInfo *playbackInfo;
@property (copy, nonatomic) NSString *rawPlaybackInfo;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *sortTitle;
@property (copy, nonatomic) NSString *storeId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) _Bool unplayable;

+ (id)mediaEntity;
+ (id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
