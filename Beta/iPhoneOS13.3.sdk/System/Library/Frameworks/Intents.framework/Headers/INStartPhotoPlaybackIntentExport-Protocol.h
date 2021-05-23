/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSArray, NSString;

@protocol INStartPhotoPlaybackIntentExport <Swift>

@property (copy, nonatomic) INDateComponentsRange *dateCreated;
@property (copy, nonatomic) CLPlacemark *locationCreated;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSArray *searchTerms;
@property (nonatomic) unsigned long long includedAttributes;
@property (nonatomic) unsigned long long excludedAttributes;
@property (copy, nonatomic) NSArray *peopleInPhoto;

- (unsigned short)init;

@end
