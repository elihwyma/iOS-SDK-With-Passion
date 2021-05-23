/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TIPreferenceDomain : NSObject

{
    _Bool _needsGetSync;
    _Bool _needsSetSync;
    NSString *_domain;
    NSString *_notification;
    double _lastSynchronizedTime;
}

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *notification;
@property (nonatomic) _Bool needsGetSync;
@property (nonatomic) _Bool needsSetSync;
@property (nonatomic) double lastSynchronizedTime;

+ (id)domainWithName:(id)arg1 notification:(id)arg2;

@end
