/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SBScenePlaceholderContentViewProviderDelegate;

@interface SBDeviceApplicationSceneViewPlaceholderContentViewProvider : NSObject

{
    id <SBScenePlaceholderContentViewProviderDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBScenePlaceholderContentViewProviderDelegate> delegate;

- (void)dealloc;
- (id)initWithApplication:(id)arg1;
- (id)sceneView:(id)arg1 requestsPlaceholderContentViewWithContext:(id)arg2;
- (void)_snapshotsDidChange:(id)arg1;
- (id)_loadLiveXIBViewForApplication:(id)arg1;
- (unsigned long long)_contentTypeToSearchFromSceneHandle:(id)arg1 withContext:(id)arg2;
- (id)_contentViewFromSceneHandle:(id)arg1 displayConfiguration:(id)arg2 orientation:(long long)arg3 snapshot:(id)arg4 size:(struct CGSize)arg5 statusBarDescriptor:(id)arg6;
- (struct CGSize)_naturalSizeForOrientation:(long long)arg1 referenceSize:(struct CGSize)arg2;
- (_Bool)_checkApplicationRestorationState:(id)arg1 useSnapshot:(_Bool *)arg2;

@end
