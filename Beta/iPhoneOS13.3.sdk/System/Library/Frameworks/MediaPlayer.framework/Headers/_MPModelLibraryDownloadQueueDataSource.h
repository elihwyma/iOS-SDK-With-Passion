/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibraryEntityTranslationContext, MPMediaLibraryEntityTranslator, MPModelLibraryDownloadQueueRequest, NSString;

@interface _MPModelLibraryDownloadQueueDataSource : NSObject

{
    MPModelLibraryDownloadQueueRequest *_request;
    MPMediaLibraryEntityTranslator *_entityTranslator;
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
    shared_ptr_274c5e8b _entityQueryResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)initWithRequest:(id)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;

@end
