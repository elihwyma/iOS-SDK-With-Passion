/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetActionPerformer.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PXAssetActionPerformer;

__attribute__((visibility("hidden")))
@interface PUPXAssetActionPerformer : PUAssetActionPerformer <Swift>

{
    PXAssetActionPerformer *_underlyingActionPerformer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)state;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithActionType:(unsigned long long)arg1 assets:(id)arg2 orAssetsByAssetCollection:(id)arg3;
- (id)initWithUnderlyingActionPerformer:(id)arg1;

@end
