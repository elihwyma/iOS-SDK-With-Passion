/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface EFDevice : NSObject

{
    _Bool _isInternal;
    NSUUID *_identifier;
}

@property (retain, nonatomic) NSUUID *identifier;
@property _Bool isInternal;
@property (readonly) NSString *platformName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentDevice;
+ (id)log;
+ (void)setCurrentDevice:(id)arg1;
+ (id)testingDeviceWithInternal:(_Bool)arg1;
+ (void)executeWithDeviceIsInternal:(CDUnknownBlockType)arg1;
+ (void)executeWithDeviceIsExternal:(CDUnknownBlockType)arg1;

- (id)_init;

@end
