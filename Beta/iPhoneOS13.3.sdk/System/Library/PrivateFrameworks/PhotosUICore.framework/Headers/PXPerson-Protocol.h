/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSString;

@protocol PXPerson <Swift>

@property (readonly) unsigned long long numberOfAssets;
@property (readonly) NSString *name;
@property (readonly) NSString *px_displayName;
@property (readonly) NSString *px_localizedName;
@property (readonly) NSString *px_localIdentifier;
@property (readonly) _Bool isVerified;
@property (readonly) _Bool isPersonModel;
@property (readonly) NSDate *px_keyPhotoDate;

+ (unsigned short)px_loadRepresentativeFacesForPersons: /* Error: Ran out of types for this method. */;

- (unsigned short)requestFaceTileImageWithTargetSize:cropFactor:style:cacheResult:boundFaceRect:completionBlock: /* Error: Ran out of types for this method. */;

@end
