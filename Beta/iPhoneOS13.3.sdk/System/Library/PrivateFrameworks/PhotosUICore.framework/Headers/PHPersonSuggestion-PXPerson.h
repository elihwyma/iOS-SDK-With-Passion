/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Photos/PHPersonSuggestion.h>

@class NSDate, NSString;

@interface PHPersonSuggestion (PXPerson)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long numberOfAssets;
@property (readonly) NSString *name;
@property (readonly) NSString *px_displayName;
@property (readonly) NSString *px_localizedName;
@property (readonly) NSString *px_localIdentifier;
@property (readonly) _Bool isVerified;
@property (readonly) _Bool isPersonModel;
@property (readonly) NSDate *px_keyPhotoDate;

+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;

- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(_Bool)arg4 boundFaceRect:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end
