/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol INSearchForTimersIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) NSArray *matchedTimers;
@property (copy, nonatomic) NSArray *unmatchedTimers;

@end
