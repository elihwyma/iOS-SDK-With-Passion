/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVStreamDataParserInternal, NSData, NSError, NSString;

@protocol AVStreamDataParserOutputHandling;

@interface AVStreamDataParser : NSObject

{
    AVStreamDataParserInternal *_parser;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSData *contentProtectionSessionIdentifier;
@property (nonatomic, readonly) _Bool mayRequireContentKeysForMediaDataProcessing;
@property (nonatomic, readonly) id <AVStreamDataParserOutputHandling> delegate;
@property (readonly) long long status;
@property (readonly) long long status2;
@property (readonly) NSError *error;
@property (nonatomic, readonly) AVAsset *asset;

+ (id)audiovisualMIMETypes;
+ (_Bool)canParseExtendedMIMEType:(id)arg1;
+ (id)outputMIMECodecParameterForInputMIMECodecParameter:(id)arg1;
+ (struct OpaqueCMBlockBuffer *)_createBlockBufferUsingNSData:(id)arg1 withOffset:(unsigned long long)arg2 withLength:(unsigned long long)arg3;
+ (struct OpaqueCMBlockBuffer *)_createBlockBufferUsingNSData:(id)arg1;
+ (id)_createNSDataWithBlockBuffer:(struct OpaqueCMBlockBuffer *)arg1;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_setError:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;
- (void)expire;
- (void)setShouldProvideMediaData:(_Bool)arg1 forTrackID:(int)arg2;
- (void)appendStreamData:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)appendStreamData:(id)arg1;
- (int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(_Bool *)arg2;
- (id)contentKeySession;
- (_Bool)_attachedToExternalContentKeySession;
- (void)_willDeallocOrFinalize;
- (_Bool)hasProtector;
- (int)_unregisterForFigManifoldCallbacksForTrackID:(int)arg1;
- (int)_createFigManifoldWithBlockBuffer:(struct OpaqueCMBlockBuffer *)arg1 manifold:(struct OpaqueFigManifold **)arg2;
- (void)providePendingMediaData;
- (void)_appendStreamData:(struct OpaqueCMBlockBuffer *)arg1 withFlags:(unsigned long long)arg2;
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 pushedSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 trackID:(int)arg3 flags:(unsigned int)arg4;
- (_Bool)shouldProvideMediaDataForTrackID:(int)arg1;
- (void)_createAssetIfNecessary;
- (int)_registerForFigManifoldCallbacksForTrackID:(int)arg1;
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 trackDidEnd:(int)arg2;
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 orDecryptorDidChange:(void *)arg3 forTrackID:(int)arg4;
- (void)_figManifoldAllNewTracksReady:(struct OpaqueFigManifold *)arg1;
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 discoveredNewTrackID:(int)arg2 mediaType:(id)arg3;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRenewalRequest:(id)arg2;
- (void)processContentKeyResponseData:(id)arg1 forTrackID:(int)arg2;
- (void)processContentKeyResponseError:(id)arg1 forTrackID:(int)arg2;
- (void)renewExpiringContentKeyResponseDataForTrackID:(int)arg1;
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 trackID:(int)arg3 options:(id)arg4 error:(id *)arg5;

@end
