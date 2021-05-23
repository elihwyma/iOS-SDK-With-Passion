/*
 Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface engageModelOutput : NSObject

{
    long long _engage;
    NSDictionary *_classProbability;
}

@property (nonatomic) long long engage;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithEngage:(long long)arg1 classProbability:(id)arg2;

@end
