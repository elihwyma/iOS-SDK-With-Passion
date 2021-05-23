/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSDate, NSString, STSiriLocation;

@interface STShowMapsSearchResultsRequest : AFSiriRequest

{
    STSiriLocation *_searchResults;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)searchResults;
- (id)createResponse;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)_initWithLocation:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3;

@end
