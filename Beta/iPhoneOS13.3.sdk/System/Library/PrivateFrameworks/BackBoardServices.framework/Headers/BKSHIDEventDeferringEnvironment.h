/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BKSHIDEventDeferringEnvironment : NSObject

{
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)protobufSchema;
+ (id)keyboardFocusEnvironment;
+ (id)systemEnvironment;
+ (id)environmentWithIdentifier:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)initForProtobufDecoding;
- (_Bool)_isSystemEnvironment;
- (_Bool)_isKeyboardFocusEnvironment;

@end
