/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSBundle, NSString;

@interface BSPluginManager : NSObject

{
    NSBundle *_bundle;
    NSString *_pluginDirectory;
    NSArray *_pluginBundles;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (copy, nonatomic, readonly) NSString *pluginDirectory;
@property (copy, nonatomic, readonly) NSArray *pluginBundles;

+ (id)managerForBundle:(id)arg1;
+ (id)mainManager;

- (id)description;
- (id)initWithBundle:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)pluginBundleForName:(id)arg1 type:(id)arg2;
- (id)pluginBundleForIdentifier:(id)arg1;
- (id)pluginBundlesForType:(id)arg1;

@end
