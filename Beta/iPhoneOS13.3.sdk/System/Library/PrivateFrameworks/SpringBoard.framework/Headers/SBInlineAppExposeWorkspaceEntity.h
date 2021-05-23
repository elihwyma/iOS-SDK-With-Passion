/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspaceEntity.h>

@class NSString;

@interface SBInlineAppExposeWorkspaceEntity : SBWorkspaceEntity

{
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (_Bool)wantsExclusiveForeground;
- (Class)viewControllerClass;
- (_Bool)isInlineAppExposeWorkspaceEntity;
- (id)inlineAppExposeWorkspaceEntity;
- (_Bool)_supportsLayoutRole:(long long)arg1;
- (_Bool)supportsPresentationAtAnySize;
- (CDUnknownBlockType)entityGenerator;

@end
