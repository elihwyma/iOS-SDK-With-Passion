/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class INIntent, NSArray, NSString;

@interface INIntentResolutionResult : NSObject

{
    long long _resolutionResultCode;
    NSArray *_disambiguationItems;
    NSArray *_alternatives;
    id _resolvedValue;
    id _itemToConfirm;
    unsigned long long _unsupportedReason;
    unsigned long long _confirmationReason;
    INIntent *_intentToExecute;
}

@property (nonatomic) long long resolutionResultCode;
@property (retain, nonatomic) NSArray *disambiguationItems;
@property (retain, nonatomic) NSArray *alternatives;
@property (retain, nonatomic) id resolvedValue;
@property (retain, nonatomic) id itemToConfirm;
@property (nonatomic) unsigned long long unsupportedReason;
@property (nonatomic) unsigned long long confirmationReason;
@property (retain, nonatomic) INIntent *intentToExecute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)unsupportedWithReason:(long long)arg1;
+ (id)confirmationRequiredWithItemToConfirm:(id)arg1 forReason:(long long)arg2;
+ (id)resolutionResultSuccessWithResolvedValue:(id)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)arg1;
+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(id)arg2;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultNotRequired;
+ (id)needsValue;
+ (id)notRequired;
+ (id)unsupported;
+ (id)requiresExecutionOfIntent:(id)arg1;
+ (id)_dataForResolutionMethodUnimplemented;
+ (id)_resolutionResultWithData:(id)arg1 slotDescription:(id)arg2;

- (id)dictionaryRepresentation;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)_objectForIntentSlotValue:(id)arg1 slotDescription:(id)arg2;
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id *)arg3;
- (id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2;
- (id)_dataForIntentSlotDescription:(id)arg1;
- (id)_initWithResultCode:(long long)arg1;
- (id)_initWithResolutionResult:(id)arg1;
- (id)_stringForResultCode:(long long)arg1;

@end
