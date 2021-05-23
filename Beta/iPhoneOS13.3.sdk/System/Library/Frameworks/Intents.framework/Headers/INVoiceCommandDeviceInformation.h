/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSNumber, NSString;

@interface INVoiceCommandDeviceInformation : NSObject <Swift>

{
    long long _deviceIdiom;
    NSNumber *_isHomePodInUltimateMode;
}

@property (nonatomic, readonly) long long deviceIdiom;
@property (copy, nonatomic, readonly) NSNumber *isHomePodInUltimateMode;
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
- (id)initWithDeviceIdiom:(long long)arg1 isHomePodInUltimateMode:(id)arg2;

@end
