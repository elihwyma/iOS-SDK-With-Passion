/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Foundation/NSObject.h>

@class _CRKCardSectionViewControllerRegistry;

@interface _CRKCardSectionViewControllerFactory : NSObject

{
    _CRKCardSectionViewControllerRegistry *_registry;
}

+ (id)_sharedInstance;
+ (id)cardSectionViewControllerForCardSection:(id)arg1;
+ (void)registerCardSectionViewControllerClass:(Class)arg1;

- (id)init;
- (id)_cardSectionViewControllerForCardSection:(id)arg1;
- (void)_registerCardSectionViewControllerClass:(Class)arg1;

@end
