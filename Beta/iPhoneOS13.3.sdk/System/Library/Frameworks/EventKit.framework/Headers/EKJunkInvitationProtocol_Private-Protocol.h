/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/Swift-Protocol.h>

@class EKEventStore, MISSING_TYPE, NSString;

@protocol EKJunkInvitationProtocol_Private <Swift>

@property (nonatomic, readonly) NSString *sendersEmail;
@property (nonatomic, readonly) NSString *sendersPhoneNumber;
@property (nonatomic, readonly) _Bool supportsJunkReporting;
@property (nonatomic, readonly) EKEventStore *eventStore;

- (MISSING_TYPE *)couldBeJunk;

@end
