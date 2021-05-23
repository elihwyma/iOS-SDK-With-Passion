/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableAttributedString;

@interface AttendeeListElement : NSObject

{
    _Bool _xMore;
    NSMutableAttributedString *_string;
}

@property (retain) NSMutableAttributedString *string;
@property _Bool xMore;

@end
