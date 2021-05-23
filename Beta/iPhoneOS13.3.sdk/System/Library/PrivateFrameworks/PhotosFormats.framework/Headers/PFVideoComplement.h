/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface PFVideoComplement : NSObject

{
    NSString *_imagePath;
    NSString *_videoPath;
    NSDictionary *_metadata;
    NSString *_originalPairingIdentifier;
    CDStruct_1b6d18a9 _originalImageDisplayTime;
    CDStruct_1b6d18a9 _originalVideoDuration;
    _Bool _didReadOriginalMetadata;
}

@property (copy, nonatomic, readonly) NSString *videoPath;
@property (copy, nonatomic, readonly) NSString *imagePath;
@property (copy, nonatomic, readonly) NSString *pairingIdentifier;
@property (nonatomic, readonly) CDStruct_1b6d18a9 imageDisplayTime;
@property (copy, nonatomic, readonly) NSString *originalPairingIdentifier;
@property (nonatomic, readonly) CDStruct_1b6d18a9 originalImageDisplayTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 originalVideoDuration;
@property (copy, nonatomic, readonly) NSString *videoPath;
@property (copy, nonatomic, readonly) NSString *imagePath;

+ (id)currentFormatVersion;

- (id)init;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2;
- (_Bool)writeToBundleAtURL:(id)arg1 error:(id *)arg2;
- (id)initWithBundleAtURL:(id)arg1;
- (id)propertyListRepresentation;
- (id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2 imageDisplayTime:(CDStruct_1b6d18a9)arg3 pairingIdentifier:(id)arg4;
- (_Bool)linkOrCopyPath:(id)arg1 toPath:(id)arg2 forceCopy:(_Bool)arg3 error:(id *)arg4;
- (void)_readMetadataIfNeeded;

@end
