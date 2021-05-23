/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPhotoEditPersistenceManager : NSObject

+ (_Bool)validateAdjustmentData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id *)arg4;

- (id)loadCompositionFrom:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id *)arg4;
- (id)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 importProperties:(id)arg4 error:(id *)arg5;
- (void)loadMasterDimensionsFromPhotoEditData:(id)arg1 outMasterWidth:(long long *)arg2 outMasterHeight:(long long *)arg3;
- (id)debugDescriptionForAdjustmentData:(id)arg1;
- (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
- (id)dataFromCompositionController:(id)arg1 outFormatIdentifier:(id *)arg2 outFormatVersion:(id *)arg3 exportProperties:(id)arg4;

@end
