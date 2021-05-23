/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, NSArray, NSString;

@interface INSpatialEventTrigger : NSObject <Swift>

{
    CLPlacemark *_placemark;
    long long _event;
    NSArray *_suggestedValues;
    long long _mobileSpace;
}

@property (copy, nonatomic, readonly) NSArray *suggestedValues;
@property (nonatomic, readonly) long long mobileSpace;
@property (copy, nonatomic, readonly) CLPlacemark *placemark;
@property (nonatomic, readonly) long long event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)initWithPlacemark:(id)arg1 event:(long long)arg2;
- (id)initWithPlacemark:(id)arg1 event:(long long)arg2 suggestedValues:(id)arg3 mobileSpace:(long long)arg4;
- (id)initWithMobileSpace:(long long)arg1 event:(long long)arg2;

@end
