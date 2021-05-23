/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _CDRateLimiter;

@interface _CDInteractionPolicy : NSObject

{
    _CDRateLimiter *_rateLimiter;
    unsigned long long _lifespanInSeconds;
    unsigned long long _maxNumberStored;
    unsigned long long _timeResolutionInSeconds;
    unsigned long long _maxNumberOfRecipients;
    unsigned long long _maxNumberOfKeywords;
    unsigned long long _maxNumberOfAttachments;
}

@property (retain) _CDRateLimiter *rateLimiter;
@property unsigned long long lifespanInSeconds;
@property unsigned long long maxNumberStored;
@property unsigned long long timeResolutionInSeconds;
@property unsigned long long maxNumberOfRecipients;
@property unsigned long long maxNumberOfKeywords;
@property unsigned long long maxNumberOfAttachments;

+ (id)policyFromDictionary:(id)arg1;
+ (id)defaultPolicy;
+ (id)policyWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7;
+ (unsigned long long)defaultLifespan;
+ (unsigned long long)defaultMaxNumberStored;
+ (unsigned long long)defaultTimeResolutionInSeconds;
+ (unsigned long long)defaultMaxNumberOfRecipients;
+ (unsigned long long)defaultMaxNumberOfKeywords;
+ (unsigned long long)defaultMaxNumberOfAttachments;
+ (id)defaultPolicyForEmail;
+ (id)defaultPolicyForMeetings;
+ (id)defaultPolicyForMessages;
+ (id)defaultPolicyForCalls;
+ (id)specialPolicyForFirstPartyApps;

- (id)description;
- (id)initWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7;

@end
