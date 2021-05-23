/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDSModeAssertionInvalidationDetailsRecord, DNDSModeAssertionRecord, DNDSModeAssertionSourceRecord, NSNumber, NSString;

@interface DNDSModeAssertionInvalidationRecord : NSObject

{
    DNDSModeAssertionRecord *_assertion;
    NSNumber *_invalidationDate;
    DNDSModeAssertionInvalidationDetailsRecord *_details;
    DNDSModeAssertionSourceRecord *_source;
    NSString *_reason;
    NSString *_reasonOverride;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) DNDSModeAssertionRecord *assertion;
@property (retain, nonatomic) NSNumber *invalidationDate;
@property (retain, nonatomic) DNDSModeAssertionInvalidationDetailsRecord *details;
@property (retain, nonatomic) DNDSModeAssertionSourceRecord *source;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *reasonOverride;

+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
+ (id)recordForInvalidation:(id)arg1;

- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;

@end
