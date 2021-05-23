/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@interface DSHardwareButtonEventHandler : NSObject

{
    _Bool _preventPropagation;
    id _target;
    SEL _action;
    unsigned long long _events;
}

@property (retain, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) _Bool preventPropagation;
@property (nonatomic) unsigned long long events;

- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToHandler:(id)arg1;

@end
