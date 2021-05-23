/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NUAdjustment, NUIdentifier;

@interface PIAdjustmentController : NSObject

{
    NSMutableDictionary *_changes;
    NUIdentifier *_identifier;
    NUAdjustment *_adjustment;
}

@property (nonatomic, readonly) NSDictionary *settings;
@property (nonatomic) _Bool enabled;
@property (retain, nonatomic) NUIdentifier *identifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NUAdjustment *adjustment;
@property (nonatomic, readonly) NSArray *inputKeys;
@property (nonatomic, readonly) NSArray *displayInputKeys;
@property (nonatomic, readonly) _Bool canBeEnabled;

+ (id)autoKey;
+ (id)enabledKey;

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)_isDefault;
- (_Bool)isEqual:(id)arg1 forKeys:(id)arg2;
- (_Bool)isAuto;
- (void)setFromAdjustment:(id)arg1;
- (void)setIsAuto:(_Bool)arg1;
- (_Bool)canHaveAuto;
- (_Bool)isEqual:(id)arg1 visualChangesOnly:(_Bool)arg2;
- (id)settingForKey:(id)arg1;
- (id)initWithAdjustment:(id)arg1;
- (_Bool)hasInputKey:(id)arg1;
- (_Bool)hasAutoKeyInSchema;
- (id)valuesForArrayInputKey:(id)arg1;
- (void)interpolateFromStart:(id)arg1 toEnd:(id)arg2 progress:(double)arg3;
- (CDStruct_1b6d18a9)timeFromInputKey:(id)arg1 timescaleKey:(id)arg2;
- (id)visualInputKeys;
- (_Bool)isSettingEqual:(id)arg1 forKey:(id)arg2;
- (void)_setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)_primitiveValueForKey:(id)arg1;

@end
