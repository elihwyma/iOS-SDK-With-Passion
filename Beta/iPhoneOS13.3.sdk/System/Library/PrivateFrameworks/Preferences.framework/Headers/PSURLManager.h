/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class PSListController, PSRootController, PSSplitViewController;

@protocol PSTopLevelController;

@interface PSURLManager : NSObject

{
    PSListController<PSTopLevelController> *_topLevelController;
    PSSplitViewController *_splitViewController;
    PSRootController *_rootController;
}

@property (retain, nonatomic) PSListController<PSTopLevelController> *topLevelController;
@property (retain, nonatomic) PSSplitViewController *splitViewController;
@property (retain, nonatomic) PSRootController *rootController;

+ (id)sharedManager;

- (id)keyValueDictionaryForURL:(id)arg1;
- (id)currentSpecifierIDPath;
- (void)setOffsetForController:(id)arg1 fromObjectPair:(id)arg2;
- (void)performURLHandlingForController:(id)arg1 dictionary:(id)arg2 items:(id)arg3 controllerNeedsPush:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)handleDeferredURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 objectOffsetPair:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)popToRootAndSelectDefaultCategory:(_Bool)arg1 performWithoutDeferringTransitions:(_Bool)arg2;
- (void)processURL:(id)arg1 animated:(_Bool)arg2 fromSearch:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_performURLHandlingForController:(id)arg1 dictionary:(id)arg2 items:(id)arg3 controllerNeedsPush:(_Bool)arg4;
- (void)handleDeferredURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)popToRootAndSelectDefaultCategory:(_Bool)arg1;
- (id)urlForCurrentNavStack;

@end
