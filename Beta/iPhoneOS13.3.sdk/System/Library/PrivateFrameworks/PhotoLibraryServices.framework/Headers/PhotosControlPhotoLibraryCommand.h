/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PhotosControlCommand.h>

@class NSManagedObjectContext, NSObject, NSURL, PHPhotoLibrary, PLPhotosCTL;

@protocol OS_dispatch_group;

@interface PhotosControlPhotoLibraryCommand : PhotosControlCommand

{
    NSManagedObjectContext *_moc;
    PHPhotoLibrary *_photoLibrary;
    NSURL *_libraryURL;
    NSObject<OS_dispatch_group> *_group;
    PLPhotosCTL *_ctl;
}

@property (readonly) NSURL *libraryURL;

+ (id)usage;
+ (id)usagesummary;
+ (const char *)optstring;
+ (struct option *)longopts;
+ (id)libraryUsage;
+ (id)libraryUsagesummary;
+ (struct option *)libraryLongopts;
+ (const char *)libraryOptstring;

- (int)save;
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)initWithArgc:(int)arg1 argv:(char **)arg2 options:(unsigned char)arg3 ctl:(id)arg4;
- (void)enterGroup;
- (void)leaveGroup;
- (void)waitForGroup;
- (void)configureWithAlternateURLToLibraryDatabase:(id)arg1;
- (id)photosCtl;
- (_Bool)argument:(id)arg1 isValidDouble:(double *)arg2;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(_Bool)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 block:(CDUnknownBlockType)arg6;
- (int)runOnAssetArgumentsAllowAll:(_Bool)arg1 additionalPredicate:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)_jsonDictionaryFromManagedObject:(id)arg1 allPreviousObjects:(id)arg2 currentDepth:(unsigned long long)arg3 maxDepth:(unsigned long long)arg4;
- (id)jsonDictionaryFromManagedObject:(id)arg1 maxDepth:(unsigned long long)arg2;
- (id)jsonDictionaryFromError:(id)arg1;
- (id)processBooleanOptionArg:(id)arg1;
- (_Bool)processOption:(BOOL)arg1 arg:(id)arg2;
- (_Bool)libraryProcessOption:(BOOL)arg1 arg:(id)arg2;
- (id)plPhotoLibrary;
- (int)runOnPhotoKitAssetArgumentsAllowAll:(_Bool)arg1 propertySets:(id)arg2 additionalPredicate:(id)arg3 block:(CDUnknownBlockType)arg4;

@end
