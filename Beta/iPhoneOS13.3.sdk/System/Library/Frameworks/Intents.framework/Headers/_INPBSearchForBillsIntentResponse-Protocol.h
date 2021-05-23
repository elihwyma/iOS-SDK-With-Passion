/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBSearchForBillsIntentResponse <Swift>

@property (copy, nonatomic) NSArray *bills;
@property (nonatomic, readonly) unsigned long long billsCount;

+ (unsigned short)billsType;

- (unsigned short)clearBills;
- (unsigned short)addBills: /* Error: Ran out of types for this method. */;
- (unsigned short)billsAtIndex: /* Error: Ran out of types for this method. */;

@end
