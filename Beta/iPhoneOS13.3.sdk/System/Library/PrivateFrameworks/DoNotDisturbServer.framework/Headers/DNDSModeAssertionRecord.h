/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDSModeAssertionDetailsRecord, DNDSModeAssertionSourceRecord, NSNumber, NSString;

@interface DNDSModeAssertionRecord : NSObject

{
    NSString *_UUID;
    NSNumber *_startDate;
    DNDSModeAssertionDetailsRecord *_details;
    DNDSModeAssertionSourceRecord *_source;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSNumber *startDate;
@property (retain, nonatomic) DNDSModeAssertionDetailsRecord *details;
@property (retain, nonatomic) DNDSModeAssertionSourceRecord *source;

+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
+ (id)recordForAssertion:(id)arg1;

- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;

@end
