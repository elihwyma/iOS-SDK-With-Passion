/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKObjectID, EKSource, NSString, NSURL;

@interface EKCalendarNotification : NSObject

{
    long long _type;
    NSString *_title;
    NSString *_name;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    NSURL *_URL;
    EKObjectID *_objectID;
    struct CGColor *_dotColor;
    _Bool _hiddenFromNotificationCenter;
    _Bool _alerted;
    _Bool _couldBeJunk;
    EKSource *_source;
    NSString *_firstName;
    NSString *_lastName;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) EKObjectID *objectID;
@property (nonatomic) struct CGColor *dotColor;
@property (nonatomic) _Bool hiddenFromNotificationCenter;
@property (nonatomic) _Bool alerted;
@property (nonatomic, readonly) _Bool needsAlert;
@property (nonatomic) _Bool couldBeJunk;
@property (retain, nonatomic) EKSource *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithType:(long long)arg1;

@end
