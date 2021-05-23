/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DNDSModeAssertionStoreRecord : NSObject

{
    NSArray *_assertions;
    NSArray *_invalidations;
    NSArray *_invalidationRequests;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *assertions;
@property (retain, nonatomic) NSArray *invalidations;
@property (retain, nonatomic) NSArray *invalidationRequests;

+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
+ (id)recordForAssertionStore:(id)arg1;

- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;

@end
