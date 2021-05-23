/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NUCompositionSchema, NUIdentifier;

@interface NUComposition : NSObject

{
    NUIdentifier *_identifier;
    NUCompositionSchema *_schema;
    long long _mediaType;
}

@property (nonatomic, readonly) NSDictionary *contents;
@property (nonatomic, readonly) NUCompositionSchema *schema;
@property (nonatomic) long long mediaType;
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
- (id)initWithCompositionSchema:(id)arg1;
- (_Bool)isEqualToComposition:(id)arg1;

@end
