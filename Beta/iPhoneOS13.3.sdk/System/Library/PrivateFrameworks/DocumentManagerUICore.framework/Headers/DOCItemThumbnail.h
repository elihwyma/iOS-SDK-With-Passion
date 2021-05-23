/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <Foundation/NSObject.h>

@class DOCThumbnailDescriptor, DOCThumbnailGenerator, DOCThumbnailRequest, FPItem, NSHashTable, NSMutableArray, NSString, UIImage;

@protocol DOCThumbnail;

@interface DOCItemThumbnail : NSObject

{
    NSMutableArray *_generationCompletionHandlers;
    _Bool _representativeIcon;
    _Bool _needsUpdate;
    FPItem *_item;
    id <DOCThumbnail> _fallback;
    DOCThumbnailGenerator *_generator;
    DOCThumbnailDescriptor *_descriptor;
    NSHashTable *_listeners;
    DOCThumbnailRequest *_currentRequest;
    UIImage *_thumbnailImage;
}

@property (nonatomic) _Bool representativeIcon;
@property (weak, nonatomic, readonly) DOCThumbnailGenerator *generator;
@property (nonatomic, readonly) DOCThumbnailDescriptor *descriptor;
@property (nonatomic, readonly) _Bool needsUpdate;
@property (nonatomic, readonly) NSHashTable *listeners;
@property (nonatomic, readonly) DOCThumbnailRequest *currentRequest;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, readonly) FPItem *item;
@property (retain, nonatomic) id <DOCThumbnail> fallback;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double minimumSize;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (nonatomic, readonly) _Bool isRepresentativeIcon;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (readonly) _Bool hasFinishedTryingToFetchCorrectThumbnail;

- (void)setNeedsUpdate;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)_notifyListeners;
- (void)updateItemTo:(id)arg1;
- (void)fetchWithOptions:(unsigned long long)arg1;
- (id)initWithGenerator:(id)arg1 item:(id)arg2 descriptor:(id)arg3 fallback:(id)arg4;
- (void)thumbnailLoaded:(id)arg1;
- (void)_cancelCurrentRequest;
- (void)scheduleUpdateIfNeeded;
- (void)_callGenerationCompletionHandlers;
- (void)_fetchThumbnailWithOptions:(unsigned long long)arg1;
- (void)thumbnailOperationFailedToLoadThumbnail;
- (void)thumbnailOperationDidLoadThumbnail:(id)arg1 representativeIcon:(_Bool)arg2;
- (_Bool)registerGenerationCompletionHandler:(CDUnknownBlockType)arg1;

@end
