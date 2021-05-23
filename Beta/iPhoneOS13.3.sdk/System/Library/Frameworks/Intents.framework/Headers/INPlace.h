/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface INPlace : NSObject <Swift>

{
    NSString *_placeType;
    NSString *_placeSubType;
    NSArray *_placeDescriptors;
    long long _personalPlaceType;
}

@property (copy, nonatomic, readonly) NSString *placeType;
@property (copy, nonatomic, readonly) NSString *placeSubType;
@property (copy, nonatomic, readonly) NSArray *placeDescriptors;
@property (nonatomic, readonly) long long personalPlaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithPlaceType:(id)arg1 placeSubType:(id)arg2 placeDescriptors:(id)arg3 personalPlaceType:(long long)arg4;

@end
