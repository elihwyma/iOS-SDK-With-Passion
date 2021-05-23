/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@class NSArray, NSDictionary, NSSet, NSString, UIImage;

@protocol FlexSongProtocol

@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, readonly) NSString *audioEncoderPresetName;
@property (nonatomic, readonly) NSString *songName;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSSet *tagIDs;
@property (nonatomic, readonly) NSSet *keywords;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) UIImage *artwork;
@property (nonatomic, readonly) NSString *songFormat;
@property (nonatomic, readonly) long long sampleRate;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) _Bool recalled;
@property (nonatomic, readonly) long long metadataVersion;
@property (nonatomic, readonly) NSDictionary *customOptions;

- (unsigned short)isLoaded;
- (unsigned short)canPlay;
- (unsigned short)updateAssets: /* Error: Ran out of types for this method. */;
- (unsigned short)naturalDuration;
- (unsigned short)minimumDuration;
- (unsigned short)assetWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)idealDurations;
- (unsigned short)renditionForDuration:withOptions:testingContext: /* Error: Ran out of types for this method. */;
- (unsigned short)existingAssetWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)verifyRendition:forDuration:failureReason: /* Error: Ran out of types for this method. */;
- (unsigned short)timedMetadataItemsWithIdentifier:forRendition: /* Error: Ran out of types for this method. */;

@end
