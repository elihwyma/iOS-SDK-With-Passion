/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

@class NSString, _BRObservableFilePresenter;

@interface BRObservableFile : NSObject

{
    NSString *_key;
    _BRObservableFilePresenter *_presenter;
}

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) _BRObservableFilePresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_applicationWillResignActive:(id)arg1;
+ (void)_applicationDidBecomeActive:(id)arg1;
+ (void)_registerInstance:(id)arg1;
+ (id)observerForKey:(id)arg1 onFileURL:(id)arg2;
+ (void)_registerForApplicationLifecycleNotifications;
+ (void)_deregisterInstance:(id)arg1;

- (void)dealloc;
- (id)addObserverBlock:(CDUnknownBlockType)arg1;
- (id)initWithKey:(id)arg1 fileURL:(id)arg2;
- (void)_presenterDidChange;

@end
