/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSData;

@interface PLBasebandEurekaLogMessage : PLBasebandMessage

{
    struct _PLBasebandLogHeader *_header;
    NSData *_payload;
}

@property struct _PLBasebandLogHeader *header;
@property (retain) NSData *payload;
@property (readonly) unsigned int eventCode;

- (id)initWithData:(id)arg1;
- (void)parseData:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (id)payloadString;
- (id)tooShortErrorString;
- (id)stringForUnknownBytes:(unsigned int)arg1;

@end
