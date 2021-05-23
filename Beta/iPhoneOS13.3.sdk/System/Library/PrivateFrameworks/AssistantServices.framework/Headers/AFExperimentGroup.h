/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface AFExperimentGroup : NSObject <Swift>

{
    NSString *_identifier;
    unsigned long long _allocation;
    NSDictionary *_properties;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long allocation;
@property (copy, nonatomic, readonly) NSDictionary *properties;

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
- (id)initWithIdentifier:(id)arg1 allocation:(unsigned long long)arg2 properties:(id)arg3;

@end
