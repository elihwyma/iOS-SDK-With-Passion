/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject

{
    _Bool _isEmail;
    _Bool _isPhone;
    EKParticipant *_participant;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_cachedDisplayName;
}

@property (weak, nonatomic) EKParticipant *participant;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *cachedDisplayName;
@property (nonatomic) _Bool isEmail;
@property (nonatomic) _Bool isPhone;

+ (id)participantForSortingWithEKParticipant:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)displayName;
- (_Bool)participantIsOptional:(id)arg1;
- (long long)compareByEmailThenByContactName:(id)arg1;
- (long long)compareByContactNames:(id)arg1;

@end
