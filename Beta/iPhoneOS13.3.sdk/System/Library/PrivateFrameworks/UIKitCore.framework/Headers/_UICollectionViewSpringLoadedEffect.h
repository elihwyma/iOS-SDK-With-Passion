/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol UISpringLoadedInteractionEffect;

__attribute__((visibility("hidden")))
@interface _UICollectionViewSpringLoadedEffect : NSObject

{
    id <UISpringLoadedInteractionEffect> _blinkEffect;
}

@property (retain, nonatomic) id <UISpringLoadedInteractionEffect> blinkEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;

@end
