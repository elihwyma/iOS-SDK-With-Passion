//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWorkspaceEntity.h>

@class NSString;

@interface SBInlineAppExposeWorkspaceEntity : SBWorkspaceEntity
{
    NSString *_bundleIdentifier;
}

@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)inlineAppExposeWorkspaceEntity;
- (BOOL)isInlineAppExposeWorkspaceEntity;
- (Class)viewControllerClass;
- (id /* CDUnknownBlockType */)entityGenerator;
- (BOOL)wantsExclusiveForeground;
- (BOOL)supportsPresentationAtAnySize;
- (BOOL)_supportsLayoutRole:(long long)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end

