/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BKSHIDEventDisplay : NSObject

{
    _Bool _builtin;
    NSString *_hardwareIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)protobufSchema;
+ (id)displayWithHardwareIdentifier:(id)arg1;
+ (id)builtinDisplay;
+ (id)nullDisplay;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForProtobufDecoding;
- (id)_hardwareIdentifier;
- (id)_initWithHardwareIdentifier:(id)arg1;
- (_Bool)_isNullDisplay;
- (_Bool)_isBuiltinDisplay;

@end
