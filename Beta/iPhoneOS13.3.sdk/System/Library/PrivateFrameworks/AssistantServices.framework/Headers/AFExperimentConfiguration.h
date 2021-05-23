/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFExperimentGroup, NSArray, NSString;

@interface AFExperimentConfiguration : NSObject <Swift>

{
    long long _type;
    NSString *_identifier;
    NSString *_version;
    AFExperimentGroup *_controlGroup;
    NSArray *_experimentGroups;
    NSString *_salt;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *version;
@property (copy, nonatomic, readonly) AFExperimentGroup *controlGroup;
@property (copy, nonatomic, readonly) NSArray *experimentGroups;
@property (copy, nonatomic, readonly) NSString *salt;

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
- (id)initWithType:(long long)arg1 identifier:(id)arg2 version:(id)arg3 controlGroup:(id)arg4 experimentGroups:(id)arg5 salt:(id)arg6;

@end
