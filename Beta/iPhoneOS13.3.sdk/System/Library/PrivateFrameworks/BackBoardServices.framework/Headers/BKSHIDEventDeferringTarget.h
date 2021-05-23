/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSHIDEventDeferringToken, NSString;

@interface BKSHIDEventDeferringTarget : NSObject

{
    int _pid;
    BKSHIDEventDeferringToken *_token;
}

@property (nonatomic, readonly) int pid;
@property (copy, nonatomic, readonly) BKSHIDEventDeferringToken *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)protobufSchema;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForProtobufDecoding;
- (id)_initWithPID:(int)arg1 token:(id)arg2;

@end
