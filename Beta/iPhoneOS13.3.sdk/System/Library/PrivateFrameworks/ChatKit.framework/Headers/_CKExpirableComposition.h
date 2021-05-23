/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKComposition.h>

__attribute__((visibility("hidden")))
@interface _CKExpirableComposition : CKComposition

+ (id)compositionWithMediaObject:(id)arg1 subject:(id)arg2;
+ (id)newCompositionWithText:(id)arg1 subject:(id)arg2 shelfPluginPayload:(id)arg3;

- (_Bool)isSaveable;
- (_Bool)isSendAnimated;

@end
