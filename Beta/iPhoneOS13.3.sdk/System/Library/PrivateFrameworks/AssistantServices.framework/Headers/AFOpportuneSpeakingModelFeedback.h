/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDate, NSDictionary;

@interface AFOpportuneSpeakingModelFeedback : NSObject <Swift>

{
    NSDate *_lastNegativeFeedback;
    NSDictionary *_negativeFeedbackByContact;
}

@property (retain, nonatomic) NSDate *lastNegativeFeedback;
@property (retain, nonatomic) NSDictionary *negativeFeedbackByContact;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
