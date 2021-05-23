/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AEChatKitStatisticsManager : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reportPresentationOfFullScreenCamera;
- (void)reportPresentationOfFullScreenPhotoLibrary;
- (void)reportSelectionOfPhotoGridIndex:(unsigned long long)arg1;
- (void)reportPayloadSentFromSource:(long long)arg1;

@end
