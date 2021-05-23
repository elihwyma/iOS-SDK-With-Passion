/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSExtensionContext.h>

@class INIntent;

@interface NSExtensionContext (ShareExtension)

@property (nonatomic, readonly) INIntent *intent;

- (void)_intents_setAccessedIntent:(_Bool)arg1;
- (id)_intents_intent;
- (_Bool)_intents_accessedIntent;
- (void)_intents_setIntent:(id)arg1;

@end
