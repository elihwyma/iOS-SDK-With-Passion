/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface HUViewControllerRegistry : NSObject

{
    NSMutableDictionary *_viewControllerClassesByIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *viewControllerClassesByIdentifier;

+ (id)sharedInstance;

- (id)init;
- (Class)viewControllerClassForIdentifier:(id)arg1;
- (void)registerViewControllerClass:(Class)arg1 forIdentifier:(id)arg2;

@end
