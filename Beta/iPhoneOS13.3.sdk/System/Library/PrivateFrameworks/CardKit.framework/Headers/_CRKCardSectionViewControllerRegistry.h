/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _CRKCardSectionViewControllerRegistry : NSObject

{
    NSMutableDictionary *_cardSectionViewControllerClassNameForCardSectionClassName;
}

- (id)init;
- (void)registerCardSectionViewControllerClass:(Class)arg1 forCardSectionClass:(Class)arg2;
- (Class)cardSectionViewControllerClassForCardSectionClass:(Class)arg1;

@end
