/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _CDContactStatistics : NSObject

{
    unsigned long long _outgoingRecipientCount;
    unsigned long long _incomingSenderCount;
    unsigned long long _incomingRecipientCount;
    NSDate *_lastOutgoingRecipientDate;
    NSDate *_lastIncomingSenderDate;
    NSDate *_lastIncomingRecipientDate;
    NSDate *_firstOutgoingRecipientDate;
    NSDate *_firstIncomingSenderDate;
    NSDate *_firstIncomingRecipientDate;
}

@property unsigned long long outgoingRecipientCount;
@property unsigned long long incomingSenderCount;
@property unsigned long long incomingRecipientCount;
@property (retain) NSDate *lastOutgoingRecipientDate;
@property (retain) NSDate *lastIncomingSenderDate;
@property (retain) NSDate *lastIncomingRecipientDate;
@property (retain) NSDate *firstOutgoingRecipientDate;
@property (retain) NSDate *firstIncomingSenderDate;
@property (retain) NSDate *firstIncomingRecipientDate;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithStatistics:(id)arg1;
- (unsigned long long)interactionCount;
- (double)interactionTimeInterval;
- (id)firstInteractionDate;
- (id)lastInteractionDate;
- (double)outgoingRecipientTimeInterval;
- (double)incomingSenderTimeInterval;
- (double)incomingRecipientTimeInterval;
- (id)firstDate:(id)arg1 updatedWith:(id)arg2;
- (id)lastDate:(id)arg1 updatedWith:(id)arg2;

@end
