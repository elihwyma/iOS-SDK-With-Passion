/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString, SBSHardwareButtonService;

@protocol SBSHardwareButtonEventConsuming;

@interface _SBSHardwareButtonEventConsumerInfo : NSObject

{
    _Bool _valid;
    SBSHardwareButtonService *_service;
    id <SBSHardwareButtonEventConsuming> _consumer;
    long long _buttonKind;
    unsigned long long _eventMask;
    long long _eventPriority;
}

@property (nonatomic, getter=isValid) _Bool valid;
@property (weak, nonatomic) SBSHardwareButtonService *service;
@property (retain, nonatomic) id <SBSHardwareButtonEventConsuming> consumer;
@property (nonatomic) long long buttonKind;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) long long eventPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)infoWithConsumer:(id)arg1;

- (void)dealloc;
- (void)invalidate;

@end
