/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@interface BKMatchEvent : NSObject

{
    _Bool _result;
    unsigned long long _timeStamp;
}

@property (nonatomic) _Bool result;
@property (nonatomic) unsigned long long timeStamp;

+ (id)matchEventWithDictionary:(id)arg1 error:(id *)arg2;

@end
