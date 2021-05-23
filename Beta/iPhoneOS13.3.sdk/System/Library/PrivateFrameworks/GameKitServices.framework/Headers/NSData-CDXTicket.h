/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSData.h>

@interface NSData (CDXTicket)

+ (id)dataWithSockAddr:(const struct sockaddr *)arg1;

- (_Bool)CDXTicketIsReflected;
- (_Bool)CDXTicketIsHolePunch;
- (unsigned long long)CDXTicketRevision;
- (long long)CDXTicketPID;
- (long long)CDXTicketPCNT;
- (id)CDXTicketExpirationDate;
- (const struct CDXTicket *)CDXTicket;
- (struct CDXTicket *)mutableCDXTicket;
- (unsigned long long)CDXTicketSID;
- (_Bool)CDXTicketIsStub;
- (id)CDXTicketTrimmed;
- (_Bool)CDXTicketWellFormed;
- (_Bool)CDXTicketIsRelatedToTicket:(id)arg1;
- (struct sockaddr *)sockAddr;

@end
