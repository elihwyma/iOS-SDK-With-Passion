/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class PSListController;

@interface PSBundleController : NSObject

{
    PSListController *_parent;
}

- (id)init;
- (void)load;
- (void)unload;
- (id)initWithParentListController:(id)arg1;
- (id)specifiersWithSpecifier:(id)arg1;
- (id)initWithParentListController:(id)arg1 properties:(id)arg2;

@end
