/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSData, NSString;

@interface PLBasebandMavLogMessage : PLBasebandMessage

{
    struct _PLBasebandLogHeader *_header;
    NSData *_payload;
    unsigned int _eventCode;
    NSString *_eventCodeString;
}

@property struct _PLBasebandLogHeader *header;
@property (retain) NSData *payload;
@property (readonly) NSString *eventCodeString;
@property (readonly) unsigned int eventCode;

- (id)initWithData:(id)arg1;
- (void)parseData:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (id)tooShortErrorString;
- (id)stringForUnknownBytes:(unsigned int)arg1;

@end
