/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Intents/INShortcut.h>

@class INIntent, NSUserActivity;

@interface INShortcut (RELogging)

@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) NSUserActivity *userActivity;

@end
