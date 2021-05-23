/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface DNDSModeAssertionInvalidationPredicateRecord : NSObject

{
    NSString *_predicateType;
    NSNumber *_date;
    NSArray *_clientIdentifiers;
    NSArray *_UUIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *predicateType;
@property (retain, nonatomic) NSNumber *date;
@property (retain, nonatomic) NSArray *clientIdentifiers;
@property (retain, nonatomic) NSArray *UUIDs;

+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
+ (id)recordForInvalidationPredicate:(id)arg1;

- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;

@end
