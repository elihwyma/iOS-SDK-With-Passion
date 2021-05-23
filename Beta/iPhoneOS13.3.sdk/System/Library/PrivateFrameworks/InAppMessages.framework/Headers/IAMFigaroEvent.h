/*
 Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IAMFigaroEvent : NSObject

{
    long long _type;
    NSDictionary *_payload;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) id value;
@property (copy, nonatomic, readonly) NSString *source;

- (_Bool)matchesWithKey:(id)arg1;
- (id)serializeFigaroEventProperties:(id)arg1 withPrefix:(id)arg2;
- (id)decomposeKey:(id)arg1;
- (id)initWithFigaroEventProperties:(id)arg1;

@end
