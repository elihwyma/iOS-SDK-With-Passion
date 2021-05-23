/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PHFetchResult;

@protocol OS_dispatch_queue;

@interface PXSiriVocabularyController : NSObject

{
    _Bool _needsAlbumsVocabularyUpdate;
    _Bool _needsPeopleVocabularyUpdate;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    PHFetchResult *_albumFetchResult;
    PHFetchResult *_peopleFetchResult;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic) _Bool needsAlbumsVocabularyUpdate;
@property (nonatomic) _Bool needsPeopleVocabularyUpdate;
@property (retain, nonatomic) PHFetchResult *albumFetchResult;
@property (retain, nonatomic) PHFetchResult *peopleFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)photoLibraryDidChange:(id)arg1;
- (void)updateVocabulary;
- (void)_onQueueUpdateAlbumVocabulary;
- (id)_localizedTitlesForAssetCollectionFetchResult:(id)arg1;
- (void)_onQueueUpdatePeopleVocabulary;

@end
