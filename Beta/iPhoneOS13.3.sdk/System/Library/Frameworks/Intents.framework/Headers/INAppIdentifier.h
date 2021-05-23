/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INAppIdentifier : NSObject <Swift>

{
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_appName;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *bundleVersion;
@property (copy, nonatomic, readonly) NSString *appName;
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
- (id)initWithBundleIdentifier:(id)arg1 bundleVersion:(id)arg2 appName:(id)arg3;

@end
