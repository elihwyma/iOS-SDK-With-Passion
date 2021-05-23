/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Intents/INRelevantShortcut.h>

@class INDefaultCardTemplate, INShortcut, NSArray;

@interface INRelevantShortcut (RELogging)

@property (nonatomic, readonly) NSArray *relevanceProviders;
@property (nonatomic, readonly) INDefaultCardTemplate *watchTemplate;
@property (nonatomic, readonly) long long shortcutRole;
@property (nonatomic, readonly) INShortcut *shortcut;

@end
