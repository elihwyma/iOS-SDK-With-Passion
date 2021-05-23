/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSDictionary.h>

@class NSArray, NSData, NSDate, NSString;

@interface NSDictionary (NNHeadlineSyncHelpers)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *sync_sections;
@property (nonatomic, readonly) NSDate *sync_expirationDate;
@property (nonatomic, readonly) unsigned long long sync_headlineCount;
@property (nonatomic, readonly) NSString *sync_identifier;
@property (nonatomic, readonly) NSString *sync_name;
@property (nonatomic, readonly) unsigned long long sync_type;
@property (nonatomic, readonly) NSString *sync_colorHexString;
@property (nonatomic, readonly) NSArray *sync_headlines;
@property (nonatomic, readonly) NSString *sync_title;
@property (nonatomic, readonly) NSString *sync_excerpt;
@property (nonatomic, readonly) NSData *sync_thumbnailImageData;
@property (nonatomic, readonly) NSData *sync_publisherLogoImageData;
@property (nonatomic, readonly) NSString *sync_publisherName;
@property (nonatomic, readonly) NSString *sync_publisherIdentifier;
@property (nonatomic, readonly) NSString *sync_webURLString;
@property (nonatomic, readonly) NSString *sync_NewsURLString;

@end
