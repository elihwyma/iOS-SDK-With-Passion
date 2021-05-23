/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, UIMenu, _UIMenuBuilder;

@interface UIMenuSystem : NSObject

{
    _UIMenuBuilder *_defaultBuilder;
    _UIMenuBuilder *_automaticallyRebuildingBuilder;
    _Bool _shouldAutomaticallyRebuild;
}

@property (nonatomic, readonly) _Bool shouldAutomaticallyRebuild;
@property (nonatomic, readonly) NSArray *_keyCommands;
@property (nonatomic, readonly) UIMenu *_rootMenu;

+ (id)mainSystem;
+ (id)contextSystem;

- (id)initWithDefaultBuilder:(id)arg1 shouldAutomaticallyRebuild:(_Bool)arg2;
- (void)_automaticallyRebuildIfNeeded;
- (id)_newBuilderFromResponderChain:(id)arg1;
- (void)setNeedsRebuild;
- (void)setNeedsRevalidate;

@end
