/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKSerializableObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EKSerializableParticipant : EKSerializableObject

{
    NSString *_name;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    NSURL *_url;
    long long _participantRole;
    long long _participantStatus;
    long long _participantType;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;

+ (id)classesForKey;

- (id)initWithParticipant:(id)arg1;
- (id)createAttendee:(id *)arg1;

@end
