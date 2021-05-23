/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class INDefaultCardTemplate, INShortcut, NSArray;

@protocol RERelevantShortcutProperties <Swift>

@property (nonatomic, readonly) NSArray *relevanceProviders;
@property (nonatomic, readonly) INDefaultCardTemplate *watchTemplate;
@property (nonatomic, readonly) long long shortcutRole;
@property (nonatomic, readonly) INShortcut *shortcut;

@end
