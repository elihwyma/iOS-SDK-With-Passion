/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFMyriadPerceptualAudioHash;

@interface AFMyriadContext : NSObject <Swift>

{
    unsigned long long _timestamp;
    AFMyriadPerceptualAudioHash *_perceptualAudioHash;
}

@property (nonatomic, readonly) unsigned long long timestamp;
@property (copy, nonatomic, readonly) AFMyriadPerceptualAudioHash *perceptualAudioHash;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1 perceptualAudioHash:(id)arg2;

@end
