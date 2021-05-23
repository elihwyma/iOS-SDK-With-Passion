/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBIntentSupport <Swift>

@property (copy, nonatomic) NSArray *intentsRestrictedWhileLockeds;
@property (nonatomic, readonly) unsigned long long intentsRestrictedWhileLockedsCount;
@property (copy, nonatomic) NSArray *intentsSupporteds;
@property (nonatomic, readonly) unsigned long long intentsSupportedsCount;
@property (copy, nonatomic) NSArray *supportedMediaCategories;
@property (nonatomic, readonly) unsigned long long supportedMediaCategoriesCount;

+ (unsigned short)intentsRestrictedWhileLockedType;
+ (unsigned short)intentsSupportedType;

- (unsigned short)clearIntentsRestrictedWhileLockeds;
- (unsigned short)addIntentsRestrictedWhileLocked: /* Error: Ran out of types for this method. */;
- (unsigned short)intentsRestrictedWhileLockedAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearIntentsSupporteds;
- (unsigned short)addIntentsSupported: /* Error: Ran out of types for this method. */;
- (unsigned short)intentsSupportedAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSupportedMediaCategories;
- (unsigned short)addSupportedMediaCategories: /* Error: Ran out of types for this method. */;
- (unsigned short)supportedMediaCategoriesAtIndex: /* Error: Ran out of types for this method. */;

@end
