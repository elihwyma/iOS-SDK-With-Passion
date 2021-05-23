/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

#import <Memories/Swift-Protocol.h>

@class CLLocation, MapLocation, NSDate, NSDictionary, NSString, NSURL, PHAsset, PHAssetRepresentation, Project;

__attribute__((visibility("hidden")))
@interface Movie : NSObject <Swift>

{
    _Bool _titleIsLocalizable;
    _Bool _favorite;
    int _availability;
    NSURL *_identifierURL;
    NSDate *_creationDate;
    CLLocation *_location;
    MapLocation *_mapLocation;
    NSDictionary *_userInfo;
    NSString *_assetFingerprint;
    NSString *_masterAssetFingerprint;
    double _durationInSeconds;
    PHAsset *_phAsset;
    PHAssetRepresentation *_phAssetRepresentation;
    Project *_weakProject;
}

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSURL *identifierURL;
@property (nonatomic) double durationInSeconds;
@property (retain, nonatomic) PHAsset *phAsset;
@property (retain, nonatomic) PHAssetRepresentation *phAssetRepresentation;
@property (nonatomic) int availability;
@property (weak, nonatomic) Project *weakProject;
@property (nonatomic, readonly) NSURL *URL;
@property (retain, nonatomic) MapLocation *mapLocation;
@property (nonatomic) _Bool titleIsLocalizable;
@property (nonatomic, getter=isFavorite) _Bool favorite;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSString *assetFingerprint;
@property (retain, nonatomic) NSString *masterAssetFingerprint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)mediaserverdCrashed;
+ (void)replaceURL:(id)arg1 withURL:(id)arg2;
+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGAffineTransform)transform;
- (id)awakeAfterUsingCoder:(id)arg1;
- (int)duration;
- (void)updateAsset;
- (_Bool)isDeleted;
- (void)removeFromList;
- (struct CGSize)naturalSize;
- (_Bool)isOffline;
- (unsigned int)videoCodec;
- (void)photoLibraryDidChange:(id)arg1;
- (_Bool)isTimelapse;
- (void)updateMetadata;
- (float)frameRate;
- (_Bool)isOnline;
- (void)updateLocation;
- (_Bool)isMono;
- (struct CGSize)naturalSizeWithTransform;
- (_Bool)hasVideoTracks;
- (_Bool)hasAudioTracks;
- (void)mediaserverdCrashed;
- (_Bool)isHighFrameRate;
- (id)initWithAssetRepresentation:(id)arg1;
- (void)updateAssetAvailability;
- (_Bool)isKenBurnsMovie;
- (void)replaceURL:(id)arg1 withURL:(id)arg2;
- (id)plistRepresentation;
- (id)initWithIdentifierURL:(id)arg1;
- (_Bool)isUnsupportedFormat;
- (id)initWithIdentifierURL:(id)arg1 userInfo:(id)arg2;
- (struct CGSize)encodedPixelSize;
- (_Bool)attemptRepairWithFingerprint;
- (void)updateCreationDate;
- (struct CGSize)encodedPixelSizeWithTransform;
- (void)addToList;
- (void)stealthlySetIdentifierURL:(id)arg1;
- (id)resolveRelativePath:(id)arg1;
- (void)syncFavorite;
- (void)updateDuration;
- (void)updateFavorite;
- (void)persistenceStateOfAssetRepresentationDidChange:(id)arg1;
- (id)decodeIdentifierURLWithCoder:(id)arg1;

@end
