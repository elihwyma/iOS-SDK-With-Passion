//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TSPluginManager;

@interface TSBlockingPluginManager : NSObject
{
    MISSING_TYPE *pluginManager;
    MISSING_TYPE *plugins;
    MISSING_TYPE *pluginModels;
    MISSING_TYPE *viewControllers;
    MISSING_TYPE *dataLock;
    MISSING_TYPE *viewControllersLock;
}

// - (void).cxx_destruct;
- (void)removeAll;
- (id)viewControllerForIdentifier:(id)arg1;
- (CGSize)waitForSizeForIdentifier:(id)arg1;
- (void)relayoutAll;
- (void)registerAndInitializePlugin:(id)arg1;
- (BOOL)containsPluginForIdentifier:(id)arg1;
- (id)init;
@property(nonatomic, readonly) TSPluginManager *pluginManager; // @synthesize pluginManager;

@end

