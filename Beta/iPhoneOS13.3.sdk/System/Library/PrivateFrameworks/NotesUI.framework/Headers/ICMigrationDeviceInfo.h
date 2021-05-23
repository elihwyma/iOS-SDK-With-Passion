/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ICMigrationDeviceInfo : NSObject

{
    _Bool _upgraded;
    _Bool _upgradedToIOS13;
    _Bool _upgradable;
    _Bool _upgradableToIOS13;
    _Bool _isOSXDevice;
    _Bool _isIOSDevice;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _Bool upgraded;
@property (nonatomic, readonly) _Bool upgradedToIOS13;
@property (nonatomic, readonly) _Bool upgradable;
@property (nonatomic, readonly) _Bool upgradableToIOS13;
@property (nonatomic, readonly) _Bool isOSXDevice;
@property (nonatomic, readonly) _Bool isIOSDevice;

+ (void)logDeviceList:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;
- (id)loggableDescription;
- (id)initWithName:(id)arg1 upgradable:(_Bool)arg2 upgraded:(_Bool)arg3;
- (_Bool)shouldBeHidden;
- (id)attributedStringWithAttributes:(id)arg1 asteriskColor:(struct UIColor *)arg2;

@end
