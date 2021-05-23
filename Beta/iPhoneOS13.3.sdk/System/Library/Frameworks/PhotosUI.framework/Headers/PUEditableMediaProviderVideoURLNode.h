/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXRunNode.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSString, NSURL, PUEditableMediaProvider;

@protocol PUEditableAsset, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUEditableMediaProviderVideoURLNode : PXRunNode <Swift>

{
    int _requestID;
    NSURL *_videoURL;
    long long _version;
    id <PUEditableAsset> _asset;
    PUEditableMediaProvider *_mediaProvider;
}

@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) id <PUEditableAsset> asset;
@property (nonatomic, readonly) PUEditableMediaProvider *mediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) _Bool waiting;
@property (readonly, getter=isRunning) _Bool running;
@property (readonly, getter=isComplete) _Bool complete;
@property (readonly, getter=isCanceled) _Bool canceled;
@property (weak, nonatomic) id <PXRunNodeDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *dependencies;
@property (nonatomic, readonly) NSURL *videoURL;

- (void)run;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(long long)arg3;
- (void)_handleDidLoadVideoURL:(id)arg1 info:(id)arg2;

@end
