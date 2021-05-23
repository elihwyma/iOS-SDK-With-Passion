/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface TLToneStoreDownload : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSString *_name;
    NSString *_albumTitle;
    NSString *_artistName;
    double _duration;
    NSString *_genreName;
    _Bool _isRingtone;
    unsigned long long _storeItemIdentifier;
    float _downloadProgress;
    NSString *_toneIdentifier;
    NSString *_identifier;
}

@property (copy, nonatomic, setter=_setName:) NSString *name;
@property (copy, nonatomic, setter=_setAlbumTitle:) NSString *albumTitle;
@property (copy, nonatomic, setter=_setArtistName:) NSString *artistName;
@property (nonatomic, setter=_setDuration:) double duration;
@property (copy, nonatomic, setter=_setGenreName:) NSString *genreName;
@property (nonatomic, getter=isRingtone, setter=_setRingtone:) _Bool ringtone;
@property (nonatomic, setter=_setStoreItemIdentifier:) unsigned long long storeItemIdentifier;
@property (nonatomic, setter=_setDownloadProgress:) float downloadProgress;
@property (copy, nonatomic, setter=_setToneIdentifier:) NSString *toneIdentifier;
@property (nonatomic, readonly) NSString *identifier;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
