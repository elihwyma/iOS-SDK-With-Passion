/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface CPLMasterChange : CPLItemChange

{
    NSDictionary *_resourcePerResourceType;
    short _importedBy;
    short _videoFrameRate;
    NSArray *_resources;
    NSArray *_expungeableResourceStates;
    NSDate *_creationDate;
    NSString *_itemType;
    NSDate *_importDate;
    NSString *_filename;
    NSString *_importGroupIdentifier;
    NSString *_mediaMetaDataType;
    NSData *_mediaMetaData;
    long long _originalOrientation;
    unsigned long long _fullSizeJPEGSource;
    NSString *_originatingFingerprint;
    NSString *_codec;
}

@property (copy, nonatomic) NSArray *resources;
@property (copy, nonatomic) NSArray *expungeableResourceStates;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *itemType;
@property (nonatomic, readonly) _Bool isImage;
@property (nonatomic, readonly) _Bool isVideo;
@property (copy, nonatomic) NSDate *importDate;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *importGroupIdentifier;
@property (copy, nonatomic) NSString *mediaMetaDataType;
@property (retain, nonatomic) NSData *mediaMetaData;
@property (nonatomic) long long originalOrientation;
@property (nonatomic) unsigned long long fullSizeJPEGSource;
@property (copy, nonatomic) NSString *originatingFingerprint;
@property (nonatomic) short importedBy;
@property (nonatomic) short videoFrameRate;
@property (copy, nonatomic) NSString *codec;

- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (_Bool)supportsResources;
- (_Bool)supportsDeletion;
- (id)propertiesDescription;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (long long)dequeueOrder;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)resourceForType:(unsigned long long)arg1;
- (void)_copyDerivatives:(unsigned long long *)arg1 count:(int)arg2 ifMatchingResourceType:(unsigned long long)arg3 fromRecord:(id)arg4 inResourcePerType:(id)arg5;
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;
- (_Bool)supportsResourceType:(unsigned long long)arg1;
- (unsigned long long)dataClassType;
- (_Bool)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1;
- (_Bool)allowsToOnlyUploadNewResources;
- (_Bool)isMasterChange;
- (_Bool)validateRecordForTracker:(id)arg1;

@end
