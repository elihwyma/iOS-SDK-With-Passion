/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class INExtensionContextSlotResolutionResult, INIntent, INIntentSlotDescription, NSArray, NSString;

@interface INIntentTestResolvedParameter : NSObject

{
    _Bool _resolveImplemented;
    NSString *_parameter;
    NSArray *_results;
    INExtensionContextSlotResolutionResult *_extensionContextResolutionResult;
    INIntent *_intent;
    INIntentSlotDescription *_slotDescription;
}

@property (nonatomic, readonly) INExtensionContextSlotResolutionResult *extensionContextResolutionResult;
@property (copy, nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) INIntentSlotDescription *slotDescription;
@property (copy, nonatomic, readonly) NSString *parameter;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) _Bool resolveImplemented;

- (id)description;
- (id)dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithParameter:(id)arg1 forIntent:(id)arg2 extensionContextResolutionResult:(id)arg3;

@end
