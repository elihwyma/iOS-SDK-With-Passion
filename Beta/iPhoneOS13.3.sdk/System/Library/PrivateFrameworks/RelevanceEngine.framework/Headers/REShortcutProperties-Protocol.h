/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class INIntent, NSUserActivity;

@protocol REShortcutProperties <Swift>

@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) NSUserActivity *userActivity;

@end
