/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/CRKSession.h>

@class DMFControlSessionIdentifier, NSDate, NSString;

@interface CRKClassSession : CRKSession

{
    unsigned short _flags;
    DMFControlSessionIdentifier *_identifier;
    NSDate *_lastBeaconFoundDate;
}

@property (nonatomic) unsigned short flags;
@property (retain, nonatomic) NSDate *lastBeaconFoundDate;
@property (nonatomic, readonly) DMFControlSessionIdentifier *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithIdentifier:(id)arg1;
- (void)logBeaconFound;
- (id)lastMatchMessageForCurrentDate:(id)arg1;
- (void)lostBeacon;
- (void)foundBeaconWithFlags:(unsigned short)arg1;

@end
