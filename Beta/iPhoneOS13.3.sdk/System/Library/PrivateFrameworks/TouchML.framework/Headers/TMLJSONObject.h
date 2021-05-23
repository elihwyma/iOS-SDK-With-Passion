/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, TMLJSONSchema;

@interface TMLJSONObject : NSObject

{
    NSDictionary *_rawJSON;
    NSMutableDictionary *_derived;
    NSMutableSet *_observers;
    TMLJSONSchema *_SCHEMA;
    NSData *_DATA;
    NSString *_STRING;
}

@property (nonatomic, readonly) TMLJSONSchema *SCHEMA;
@property (copy, nonatomic) NSDictionary *rawJSON;
@property (copy, nonatomic) NSData *DATA;
@property (copy, nonatomic) NSString *STRING;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)tmlPropertyWithKeyPath:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)initWithSchema:(id)arg1;
- (void)setRawJSONSync:(id)arg1;
- (void)setRawJSONAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSchema:(id)arg1 json:(id)arg2;
- (void)validateJSON:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyAllObservers;
- (void)internalValidateJSON:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)internalSetJSON:(id)arg1;
- (id)rawValueForKeyPath:(id)arg1 dictionary:(id)arg2;
- (void)tmlAddObserver:(id)arg1 forKeyPath:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)tmlRemoveObserver:(id)arg1 forKeyPath:(id)arg2;

@end
