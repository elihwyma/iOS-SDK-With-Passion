/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIDebugViewDefaults : NSObject

{
    _Bool _defaultBoolValue;
    _Bool _integerValueType;
    NSString *_title;
    NSString *_subtitle;
    NSString *_domain;
    NSString *_defaultName;
    unsigned long long _defaultIntegerValue;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *defaultName;
@property (nonatomic) _Bool defaultBoolValue;
@property (nonatomic) _Bool integerValueType;
@property (nonatomic) unsigned long long defaultIntegerValue;

- (void)toggleDefaultBoolValue;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 domain:(id)arg3 defaultName:(id)arg4 boolType:(_Bool)arg5;

@end
