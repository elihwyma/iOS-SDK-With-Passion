/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface AFMetrics : NSObject <Swift>

{
    NSString *_originalCommandId;
    long long _category;
    NSDictionary *_eventInfo;
    NSNumber *_duration;
}

@property (copy, nonatomic) NSString *originalCommandId;
@property (nonatomic) long long category;
@property (copy, nonatomic) NSDictionary *eventInfo;
@property (retain, nonatomic) NSNumber *duration;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 eventInfo:(id)arg3 duration:(id)arg4;
- (id)categoryString;
- (double)_roundDouble:(double)arg1 toSignificantDigits:(unsigned long long)arg2;
- (id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 duration:(id)arg3;
- (id)aceMetrics;

@end
