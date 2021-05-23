/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVURLAsset, LPAudioProperties, NSData, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface LPAudio : NSObject

{
    NSData *_data;
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    AVURLAsset *_asset;
    LPAudioProperties *_properties;
    NSURL *_fileURL;
    NSURL *_streamingURL;
    NSString *_MIMEType;
}

@property (nonatomic, readonly) unsigned long long _encodedSize;
@property (copy, nonatomic, readonly) NSData *data;
@property (copy, nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) AVAsset *_asset;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic, readonly) NSURL *streamingURL;
@property (copy, nonatomic, readonly) LPAudioProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)initWithStreamingURL:(id)arg1 properties:(id)arg2;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (_Bool)_shouldEncodeData;
- (void)_mapDataFromFileURL;
- (id)_initWithAudio:(id)arg1;

@end
