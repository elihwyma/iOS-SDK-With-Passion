/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXAnalyticsEvent.h>

@class NSDictionary, NSString;

@interface SXMediaEvent : SXAnalyticsEvent

{
    unsigned long long _mediaType;
    unsigned long long _galleryType;
    unsigned long long _videoType;
    NSString *_mediaId;
    NSString *_componentIdentifier;
    NSString *_componentType;
    NSString *_componentRole;
    NSDictionary *_metaData;
}

@property (nonatomic) unsigned long long mediaType;
@property (nonatomic) unsigned long long galleryType;
@property (nonatomic) unsigned long long videoType;
@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *componentIdentifier;
@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSString *componentRole;
@property (retain, nonatomic) NSDictionary *metaData;

@end
