/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSData;

@interface AFMyriadPerceptualAudioHash : NSObject <Swift>

{
    NSData *_data;
}

@property (copy, nonatomic, readonly) NSData *data;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end
