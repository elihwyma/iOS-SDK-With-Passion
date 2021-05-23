/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Intents/INIntentResponse.h>

@class NSArray, NSNumber;

@interface WFMatchTextGetGroupIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;
@property (copy, nonatomic) NSArray *text;
@property (copy, nonatomic) NSNumber *noMatchIndex;
@property (copy, nonatomic) NSNumber *rangeErrorGroupNumber;
@property (copy, nonatomic) NSNumber *rangeErrorGroupCount;

+ (id)noMatchIntentResponseWithNoMatchIndex:(id)arg1;
+ (id)rangeErrorIntentResponseWithRangeErrorGroupNumber:(id)arg1 rangeErrorGroupCount:(id)arg2;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
