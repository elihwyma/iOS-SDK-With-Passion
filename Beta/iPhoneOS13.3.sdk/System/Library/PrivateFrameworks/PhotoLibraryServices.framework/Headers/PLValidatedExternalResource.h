/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL;

@protocol PLCodecIdentity, PLUniformTypeIdentifierIdentity;

@interface PLValidatedExternalResource : NSObject <Swift>

{
    short _trashedState;
    unsigned int _version;
    unsigned int _resourceType;
    unsigned int _recipeID;
    unsigned int _orientation;
    int _qualitySortValue;
    long long _unorientedWidth;
    long long _unorientedHeight;
    id <PLCodecIdentity> _codecID;
    id <PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
    long long _dataLength;
    NSNumber *_sidecarIndex;
    NSURL *_fileURL;
    NSDate *_trashedDate;
    long long _ptpTrashedState;
}

@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int recipeID;
@property (retain, nonatomic) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) long long dataLength;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) long long unorientedHeight;
@property (retain, nonatomic) id <PLCodecIdentity> codecID;
@property (nonatomic) int qualitySortValue;
@property (nonatomic) short trashedState;
@property (retain, nonatomic) NSDate *trashedDate;
@property (nonatomic) long long ptpTrashedState;
@property (retain, nonatomic) NSNumber *sidecarIndex;
@property (nonatomic, readonly) _Bool isDerivative;
@property (nonatomic, readonly) _Bool hasRecipe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isDefaultOrientation;
- (_Bool)isPlayableVideo;
- (unsigned long long)cplTypeWithAssetID:(id)arg1;
- (void)setQualitySortValueBasedOnAssetWidth:(long long)arg1 height:(long long)arg2 isNativeColorSpace:(_Bool)arg3 isLosslessEncoding:(_Bool)arg4 isCuratedPreview:(_Bool)arg5;
- (void)setTrashedStateFromURL;
- (_Bool)isEqualToValidatedExternalResource:(id)arg1;

@end
