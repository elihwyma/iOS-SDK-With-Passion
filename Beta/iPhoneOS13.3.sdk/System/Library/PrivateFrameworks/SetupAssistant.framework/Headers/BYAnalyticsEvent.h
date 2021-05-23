/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface BYAnalyticsEvent : NSObject

{
    NSString *_name;
    NSDictionary *_payload;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *payload;

+ (id)eventWithName:(id)arg1 withPayload:(id)arg2;

- (id)description;

@end
