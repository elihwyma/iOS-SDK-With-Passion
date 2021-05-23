/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/Swift-Protocol.h>

@class NSData, NSString;

@protocol NNSyncableHeadline <Swift>

@property (nonatomic, readonly) NSString *sync_identifier;
@property (nonatomic, readonly) NSString *sync_title;
@property (nonatomic, readonly) NSString *sync_excerpt;
@property (nonatomic, readonly) NSData *sync_thumbnailImageData;
@property (nonatomic, readonly) NSData *sync_publisherLogoImageData;
@property (nonatomic, readonly) NSString *sync_publisherName;
@property (nonatomic, readonly) NSString *sync_publisherIdentifier;
@property (nonatomic, readonly) NSString *sync_webURLString;
@property (nonatomic, readonly) NSString *sync_NewsURLString;

@end
