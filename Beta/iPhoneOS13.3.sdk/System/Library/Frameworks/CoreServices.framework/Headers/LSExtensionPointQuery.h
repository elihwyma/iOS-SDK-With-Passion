/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LSExtensionPointQuery : _LSQuery

{
    NSString *_identifier;
    NSString *_version;
    unsigned int _platform;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) unsigned int platform;

+ (_Bool)supportsSecureCoding;
+ (id)extensionPointQueryForIdentifier:(id)arg1 platform:(unsigned int)arg2 version:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 platform:(unsigned int)arg2 version:(id)arg3;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
