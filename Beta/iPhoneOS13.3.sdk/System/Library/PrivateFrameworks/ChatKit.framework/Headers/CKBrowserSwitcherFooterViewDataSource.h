/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CKBrowserSwitcherFooterViewDataSource : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (unsigned long long)numberOfPluginsInSwitcherView:(id)arg1 forSection:(unsigned long long)arg2;
- (id)switcherView:(id)arg1 modelAtIndexPath:(id)arg2 type:(long long *)arg3;
- (id)switcherView:(id)arg1 indexPathOfModelWithIdentifier:(id)arg2;
- (id)pluginManager;

@end
