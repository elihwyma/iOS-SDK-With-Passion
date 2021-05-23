/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDSModeAssertionLifetimeRecord, NSNumber, NSString;

@interface DNDSModeAssertionDetailsRecord : NSObject

{
    NSString *_identifier;
    NSString *_modeIdentifier;
    NSNumber *_userVisibleEndDate;
    DNDSModeAssertionLifetimeRecord *_lifetime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *modeIdentifier;
@property (retain, nonatomic) NSNumber *userVisibleEndDate;
@property (retain, nonatomic) DNDSModeAssertionLifetimeRecord *lifetime;

+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
+ (id)recordForAssertionDetails:(id)arg1;

- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;

@end
