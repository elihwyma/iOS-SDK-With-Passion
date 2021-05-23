/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class CNVCardDateComponentsFormatter, NSCalendar;

@interface CNVCardDateComponentsParser : NSObject

{
    CNVCardDateComponentsFormatter *_formatter;
    NSCalendar *_gregorianCalendar;
}

- (id)init;
- (id)gregorianDateComponentsWithParser:(id)arg1;
- (id)dateComponentsWithParser:(id)arg1;
- (id)dateComponentsFromString:(id)arg1 omitYear:(long long)arg2;
- (id)dateComponentsFromString:(id)arg1 calendarIdentifier:(id)arg2;

@end
