/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TURepeatingAction : NSObject

{
    CDUnknownBlockType _action;
    CDUnknownBlockType _completion;
    unsigned long long _remainingIterations;
    double _pauseDuration;
}

@property (copy, nonatomic) CDUnknownBlockType action;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) unsigned long long remainingIterations;
@property (nonatomic) double pauseDuration;

- (id)initWithAction:(CDUnknownBlockType)arg1;

@end
