/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HULocationDevice : NSObject

{
    _Bool _currentDevice;
    NSString *_identifier;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, getter=isCurrentDevice) _Bool currentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 currentDevice:(_Bool)arg3;
- (id)initWithHMDevice:(id)arg1;
- (id)initWithFMFDevice:(id)arg1;

@end
