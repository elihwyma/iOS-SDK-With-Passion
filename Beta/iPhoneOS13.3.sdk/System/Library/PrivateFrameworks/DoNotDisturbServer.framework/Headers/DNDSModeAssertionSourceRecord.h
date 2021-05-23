/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DNDSModeAssertionSourceRecord : NSObject

{
    NSString *_clientIdentifier;
    NSString *_deviceIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;

+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
+ (id)recordForAssertionSource:(id)arg1;

- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;

@end
