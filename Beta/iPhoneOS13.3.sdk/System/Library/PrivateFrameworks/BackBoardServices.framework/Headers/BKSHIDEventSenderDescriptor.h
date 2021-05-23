/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSHIDEventDisplay;

@interface BKSHIDEventSenderDescriptor : NSObject

{
    long long _hardwareType;
    BKSHIDEventDisplay *_associatedDisplay;
    _Bool _authenticated;
    unsigned int _primaryPage;
    unsigned int _primaryUsage;
}

@property (nonatomic, readonly) long long hardwareType;
@property (nonatomic, readonly) BKSHIDEventDisplay *associatedDisplay;
@property (nonatomic, readonly, getter=isAuthenticated) _Bool authenticated;
@property (nonatomic, readonly) unsigned int primaryPage;
@property (nonatomic, readonly) unsigned int primaryUsage;

+ (_Bool)supportsSecureCoding;
+ (id)build:(CDUnknownBlockType)arg1;
+ (id)wildcard;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithHardwareType:(long long)arg1 associatedDisplay:(id)arg2 authenticated:(_Bool)arg3 primaryPage:(unsigned int)arg4 primaryUsage:(unsigned int)arg5;

@end
