/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSObject;

@protocol INIntentResolutionResultExport <Swift>

@property (retain, nonatomic) NSArray *disambiguationItems;
@property (retain, nonatomic) NSArray *alternatives;
@property (retain, nonatomic) NSObject *resolvedValue;
@property (retain, nonatomic) NSObject *itemToConfirm;
@property (nonatomic) unsigned long long unsupportedReason;

+ (unsigned short)resolutionResultSuccessWithResolvedValue: /* Error: Ran out of types for this method. */;
+ (unsigned short)resolutionResultDisambiguationWithItemsToDisambiguate: /* Error: Ran out of types for this method. */;
+ (unsigned short)resolutionResultConfirmationRequiredWithItemToConfirm: /* Error: Ran out of types for this method. */;
+ (unsigned short)resolutionResultUnsupportedWithReason: /* Error: Ran out of types for this method. */;
+ (unsigned short)resolutionResultUnsupportedWithReason:alternativeItems: /* Error: Ran out of types for this method. */;
+ (unsigned short)resolutionResultNeedsValue;
+ (unsigned short)resolutionResultNotRequired;

- (unsigned short)init;
- (unsigned short)_dataForIntentSlotDescription: /* Error: Ran out of types for this method. */;

@end
