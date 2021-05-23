/*
 Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface CalAlarmMetadata : NSObject

{
    NSArray *_attach;
    NSArray *_attendee;
    NSString *_description;
    NSString *_summary;
}

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property (retain) NSString *description;
@property (retain) NSString *summary;

+ (_Bool)supportsSecureCoding;
+ (id)metadataWithData:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dataRepresentation;
- (id)initWithICSAlarm:(id)arg1;
- (void)applyToAlarm:(id)arg1;

@end
