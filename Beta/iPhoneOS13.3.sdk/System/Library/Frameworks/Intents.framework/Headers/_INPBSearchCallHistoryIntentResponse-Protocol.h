/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@protocol _INPBSearchCallHistoryIntentResponse <Swift>

@property (copy, nonatomic) NSArray *callRecords;
@property (nonatomic, readonly) unsigned long long callRecordsCount;
@property (copy, nonatomic) NSString *dateCreated;
@property (nonatomic, readonly) _Bool hasDateCreated;
@property (copy, nonatomic) NSString *status;
@property (nonatomic, readonly) _Bool hasStatus;
@property (copy, nonatomic) NSString *targetContact;
@property (nonatomic, readonly) _Bool hasTargetContact;

+ (unsigned short)callRecordsType;

- (unsigned short)clearCallRecords;
- (unsigned short)addCallRecords: /* Error: Ran out of types for this method. */;
- (unsigned short)callRecordsAtIndex: /* Error: Ran out of types for this method. */;

@end
