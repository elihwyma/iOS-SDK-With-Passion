/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NUAdjustmentSchema, NUIdentifier;

@interface NUAdjustment : NSObject

{
    NUIdentifier *_identifier;
    NUAdjustmentSchema *_schema;
}

@property (nonatomic, readonly) NSDictionary *settings;
@property (nonatomic, readonly) NUAdjustmentSchema *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NUIdentifier *identifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (void)reset;
- (_Bool)isEqualToAdjustment:(id)arg1;
- (id)initWithAdjustmentSchema:(id)arg1;

@end
