/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSOperation.h>

@class NSCache, NSManagedObjectID, NSMutableArray, NSString, NSURL;

@interface ICAttachmentImageLoadingOperation : NSOperation

{
    _Bool _forceFullSizeImage;
    short _attachmentType;
    NSString *_cacheKey;
    struct NSCache *_cache;
    NSManagedObjectID *_attachmentObjectID;
    NSURL *_mediaURL;
    NSMutableArray *_completionHandlers;
}

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSManagedObjectID *attachmentObjectID;
@property (retain, nonatomic) NSURL *mediaURL;
@property (copy, nonatomic) NSString *cacheKey;
@property (nonatomic) short attachmentType;
@property (nonatomic) _Bool forceFullSizeImage;
@property (retain, nonatomic) NSMutableArray *completionHandlers;

- (void)main;
- (CDUnknownBlockType)addCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCache:(struct NSCache *)arg1 attachment:(id)arg2 attachmentType:(short)arg3 forceFullSizeImage:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)removeCompletionHandler:(CDUnknownBlockType)arg1 cancelIfNoneLeft:(_Bool)arg2;

@end
