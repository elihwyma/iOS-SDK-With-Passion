/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFBulletin, AceObject, NSDictionary, NSString;

@interface AFApplicationContext : NSObject <Swift>

{
    NSString *_associatedBundleIdentifier;
    AFBulletin *_bulletin;
    AceObject *_aceContext;
    NSDictionary *_contextDictionary;
}

@property (copy, nonatomic, readonly) NSString *associatedBundleIdentifier;
@property (copy, nonatomic, readonly) AFBulletin *bulletin;
@property (copy, nonatomic, readonly) AceObject *aceContext;
@property (copy, nonatomic, readonly) NSDictionary *contextDictionary;

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
- (id)initWithAssociatedBundleIdentifier:(id)arg1 bulletin:(id)arg2 aceContext:(id)arg3 contextDictionary:(id)arg4;

@end
