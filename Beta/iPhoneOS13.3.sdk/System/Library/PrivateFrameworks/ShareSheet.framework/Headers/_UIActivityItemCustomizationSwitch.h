/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/_UIActivityItemCustomization.h>

@class NSString;

@interface _UIActivityItemCustomizationSwitch : _UIActivityItemCustomization

{
    _Bool _value;
    CDUnknownBlockType __handler;
}

@property (copy, nonatomic, setter=_setHandler:) CDUnknownBlockType _handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool value;

- (void)_setValue:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 value:(_Bool)arg3 footerText:(id)arg4;

@end
