/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBPayloadNeedsValue <Swift>

@property (copy, nonatomic) NSArray *promptItems;
@property (nonatomic, readonly) unsigned long long promptItemsCount;

+ (unsigned short)promptItemsType;

- (unsigned short)clearPromptItems;
- (unsigned short)addPromptItems: /* Error: Ran out of types for this method. */;
- (unsigned short)promptItemsAtIndex: /* Error: Ran out of types for this method. */;

@end
