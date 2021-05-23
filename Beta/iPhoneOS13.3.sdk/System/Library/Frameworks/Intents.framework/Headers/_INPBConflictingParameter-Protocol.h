/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@protocol _INPBConflictingParameter <Swift>

@property (copy, nonatomic) NSArray *alternateItems;
@property (nonatomic, readonly) unsigned long long alternateItemsCount;
@property (copy, nonatomic) NSString *keyPath;
@property (nonatomic, readonly) _Bool hasKeyPath;

+ (unsigned short)alternateItemsType;

- (unsigned short)clearAlternateItems;
- (unsigned short)addAlternateItems: /* Error: Ran out of types for this method. */;
- (unsigned short)alternateItemsAtIndex: /* Error: Ran out of types for this method. */;

@end
