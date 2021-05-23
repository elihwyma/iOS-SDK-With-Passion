/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableSet, NSString, NSUUID, TIKeyboardState, TIRollingLog;

@interface TITypologyLog : NSObject

{
    NSUUID *_uuid;
    NSDate *_date;
    NSString *_systemVersion;
    NSString *_buildVersion;
    NSString *_clientIdentifier;
    NSDictionary *_config;
    NSUUID *_lastRecordUUID;
    TIRollingLog *_records;
    TIRollingLog *_traceLog;
    NSMutableSet *_loggedRecordClasses;
    TIKeyboardState *_lastKeyboardState;
}

@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSUUID *lastRecordUUID;
@property (nonatomic, readonly) TIRollingLog *records;
@property (nonatomic, readonly) TIRollingLog *traceLog;
@property (retain, nonatomic) NSMutableSet *loggedRecordClasses;
@property (retain, nonatomic) TIKeyboardState *lastKeyboardState;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) NSString *buildVersion;
@property (retain, nonatomic) NSDictionary *config;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)timestamp;
- (id)filename;
- (id)textSummary;
- (id)initWithTypologyLog:(id)arg1;
- (id)recordSummary;
- (void)logRecord:(id)arg1;
- (void)logToHumanReadableTrace:(id)arg1;
- (void)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateHumanReadableTraceEntriesWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)loggedRecordOfClass:(Class)arg1;

@end
