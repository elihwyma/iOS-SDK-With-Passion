/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface IKPlayerStateChangeEventUserInfo : NSObject

{
    NSMutableDictionary *_mutableProperties;
    long long _state;
    long long _oldState;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long oldState;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double rate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *properties;

+ (id)stateNameForState:(long long)arg1;
+ (long long)stateForStateName:(id)arg1;

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithState:(long long)arg1;
- (id)initWithState:(long long)arg1 oldState:(long long)arg2;

@end
