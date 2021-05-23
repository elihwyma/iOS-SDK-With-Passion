/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBAnswerCallIntentResponse <Swift>

@property (copy, nonatomic) NSArray *callRecords;
@property (nonatomic, readonly) unsigned long long callRecordsCount;
@property (nonatomic) int statusCode;
@property (nonatomic) _Bool hasStatusCode;

+ (unsigned short)callRecordsType;

- (unsigned short)statusCodeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsStatusCode: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCallRecords;
- (unsigned short)addCallRecords: /* Error: Ran out of types for this method. */;
- (unsigned short)callRecordsAtIndex: /* Error: Ran out of types for this method. */;

@end
