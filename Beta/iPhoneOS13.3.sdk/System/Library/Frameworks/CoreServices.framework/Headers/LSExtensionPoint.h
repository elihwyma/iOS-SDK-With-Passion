/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSQueryResult.h>

@class NSDictionary, NSNumber, NSString, _LSLazyPropertyList;

@interface LSExtensionPoint : _LSQueryResult

{
    unsigned int _platform;
    _LSLazyPropertyList *_sdkEntry;
    NSString *_identifier;
    NSString *_name;
    NSString *_version;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSNumber *platform;
@property (nonatomic, readonly) NSDictionary *sdkEntry;

+ (_Bool)supportsSecureCoding;
+ (id)extensionPointForIdentifier:(id)arg1 platform:(id)arg2;
+ (id)extensionPointForIdentifier:(id)arg1;
+ (id)identifierForCurrentProcess;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 platform:(unsigned int)arg2 data:(id)arg3;

@end
