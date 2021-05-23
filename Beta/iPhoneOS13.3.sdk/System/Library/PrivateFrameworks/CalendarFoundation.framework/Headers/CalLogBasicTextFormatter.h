/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSString;

@interface CalLogBasicTextFormatter : NSObject

{
    _Bool _includeFunction;
    _Bool _includeLevel;
    _Bool _includeLogName;
    _Bool _includeMessage;
    _Bool _includeProcessID;
    _Bool _includeProcessName;
    _Bool _includeMachPort;
    _Bool _includeTimestamp;
    _Bool _includeEnvelopePartNames;
    _Bool _useTinyEnvelopePartNames;
    _Bool _useCompactForm;
    _Bool _usePrettyTimestamp;
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) _Bool includeFunction;
@property (nonatomic) _Bool includeLevel;
@property (nonatomic) _Bool includeLogName;
@property (nonatomic) _Bool includeMessage;
@property (nonatomic) _Bool includeProcessID;
@property (nonatomic) _Bool includeProcessName;
@property (nonatomic) _Bool includeMachPort;
@property (nonatomic) _Bool includeTimestamp;
@property (nonatomic) _Bool includeEnvelopePartNames;
@property (nonatomic) _Bool useTinyEnvelopePartNames;
@property (nonatomic) _Bool useCompactForm;
@property (nonatomic) _Bool usePrettyTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)newFormattedString:(id)arg1;

@end
