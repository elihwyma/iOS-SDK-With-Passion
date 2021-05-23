/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDExtensionManager, FPDFilePresenter, NSDictionary, NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDPresenterManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_presenters;
    FPDExtensionManager *_extensionManager;
    FPDFilePresenter *_frontmostPresenter;
}

@property (nonatomic, readonly) NSDictionary *presenters;

- (void)removePresenter:(id)arg1;
- (id)initWithExtensionManager:(id)arg1;
- (void)addPresenter:(id)arg1 itemID:(id)arg2 urlHint:(id)arg3 pid:(int)arg4;
- (void)signalPresentersForItemID:(id)arg1;
- (id)presentersForDomain:(id)arg1;
- (void)noteItemBecameFrontmost:(id)arg1 inWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
