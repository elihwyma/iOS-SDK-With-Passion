/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, SACalendar, SAUIAppPunchOut;

@interface SAMovieShowtime : AceObject <Swift>

@property (retain, nonatomic) SAUIAppPunchOut *buyTicketsPunchout;
@property (copy, nonatomic) NSNumber *childTicketQuantity;
@property (nonatomic) _Bool is3d;
@property (nonatomic) _Bool isImax;
@property (copy, nonatomic) NSNumber *regularTicketQuantity;
@property (copy, nonatomic) NSNumber *seniorTicketQuantity;
@property (retain, nonatomic) SACalendar *showtime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)showtime;
+ (id)showtimeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
