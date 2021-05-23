/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@protocol INIntentSlotDescriptionExport <Swift>

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long tag;
@property (copy, nonatomic, readonly) NSString *facadePropertyName;
@property (copy, nonatomic, readonly) NSString *dataPropertyName;
@property (nonatomic, readonly) long long valueType;
@property (nonatomic, readonly) long long valueStyle;
@property (nonatomic, readonly) _Bool isExtended;
@property (nonatomic, readonly) _Bool isPrivate;
@property (nonatomic, readonly) SEL resolveSelector;
@property (nonatomic, readonly) SEL deprecatedResolveSelector;
@property (copy, nonatomic, readonly) NSArray *resolveSelectorStrings;

- (unsigned short)init;

@end
