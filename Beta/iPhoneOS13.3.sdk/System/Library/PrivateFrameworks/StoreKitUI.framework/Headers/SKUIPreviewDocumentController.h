/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class IKAppDocument, NSHashTable, NSOperationQueue, NSString, SKUIClientContext, SUAudioPlayer;

__attribute__((visibility("hidden")))
@interface SKUIPreviewDocumentController : NSObject

{
    SUAudioPlayer *_audioPlayer;
    SKUIClientContext *_clientContext;
    IKAppDocument *_document;
    NSOperationQueue *_operationQueue;
    NSHashTable *_viewControllers;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic, readonly, getter=isPreviewActive) _Bool previewActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_operationQueue;
- (id)initWithDocument:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)_playerSessionsDidChangeNotification:(id)arg1;
- (void)_connectToAudioPlayer;
- (void)_reloadViewControllersWithPreviewStatus:(id)arg1 animated:(_Bool)arg2;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (id)overlayViewControllerWithBackgroundStyle:(long long)arg1;

@end
