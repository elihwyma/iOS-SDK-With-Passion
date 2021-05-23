/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol INIdentifyIncomingCallerIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSArray *callRecords;

@end
