/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface URLTarget : NSObject

{
    unsigned int _applicationState;
    NSString *_bundleID;
    long long _defaultIndex;
    NSString *_normalScheme;
    NSString *_secureScheme;
}

@property (nonatomic) unsigned int applicationState;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) long long defaultIndex;
@property (retain, nonatomic) NSString *normalScheme;
@property (retain, nonatomic) NSString *secureScheme;

+ (id)targetWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;

- (id)initWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;

@end
