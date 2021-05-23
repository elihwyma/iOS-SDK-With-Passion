/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PHVideoRequestBehaviorSpec : NSObject

{
    _Bool _networkAccessAllowed;
    _Bool _streamingAllowed;
    _Bool _videoComplementAllowed;
    _Bool _mediumHighQualityAllowed;
    _Bool _restrictToPlayableOnCurrentDevice;
    long long _deliveryMode;
    long long _version;
    long long _streamingVideoIntent;
}

@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long version;
@property (nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed;
@property (nonatomic, getter=isStreamingAllowed) _Bool streamingAllowed;
@property (nonatomic) long long streamingVideoIntent;
@property (nonatomic, getter=isVideoComplementAllowed) _Bool videoComplementAllowed;
@property (nonatomic, getter=isMediumHighQualityAllowed) _Bool mediumHighQualityAllowed;
@property (nonatomic) _Bool restrictToPlayableOnCurrentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)shortDescription;
- (long long)videoVersion;
- (long long)videoDeliveryMode;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)arg1;

@end
