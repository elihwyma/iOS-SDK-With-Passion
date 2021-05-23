/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSManagedObjectContext, NSOrderedSet, NSString, PLPhotoLibrary;

@interface PHChangeValidationController : NSObject

{
    _Bool _didPrepare;
    _Bool _confirmationRequired;
    NSOrderedSet *_insertRequests;
    NSOrderedSet *_updateRequests;
    NSOrderedSet *_deleteRequests;
    NSManagedObjectContext *_managedObjectContext;
    PLPhotoLibrary *_photoLibrary;
    NSArray *_renderedContentURLs;
    NSArray *_assetsToChangeContent;
    NSArray *_assetsToRevert;
    NSArray *_assetsToHide;
    NSArray *_assetsToDelete;
    NSArray *_albumsToDelete;
    NSArray *_foldersToDelete;
    NSString *_clientName;
}

@property (nonatomic, readonly) NSArray *renderedContentURLs;
@property (nonatomic, readonly) NSArray *assetsToChangeContent;
@property (nonatomic, readonly) NSArray *assetsToRevert;
@property (nonatomic, readonly) NSArray *assetsToHide;
@property (nonatomic, readonly) NSArray *assetsToDelete;
@property (nonatomic, readonly) NSArray *albumsToDelete;
@property (nonatomic, readonly) NSArray *foldersToDelete;
@property (copy, nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) _Bool confirmationRequired;
@property (nonatomic, readonly) NSOrderedSet *insertRequests;
@property (nonatomic, readonly) NSOrderedSet *updateRequests;
@property (nonatomic, readonly) NSOrderedSet *deleteRequests;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;

- (_Bool)validateWithError:(id *)arg1;
- (id)initWithInsertRequests:(id)arg1 updateRequests:(id)arg2 deleteRequests:(id)arg3 context:(id)arg4 photoLibrary:(id)arg5;
- (_Bool)_prepareWithError:(id *)arg1;
- (id)_simpleDeleteValidatorsWithManagedObjectContext:(id)arg1;
- (_Bool)_recordObjectID:(id)arg1 withSimpleDeleteValidators:(id)arg2;
- (_Bool)_validateSimpleDeletionsWithValidators:(id)arg1 requestsByObjectID:(id)arg2 error:(id *)arg3;
- (_Bool)promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4;
- (_Bool)promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 renderedContentURLs:(id)arg5;
- (_Bool)promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 previewAssetLocalIdentifiers:(id)arg5;
- (_Bool)_promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 additionalAlertParameters:(id)arg5;

@end
