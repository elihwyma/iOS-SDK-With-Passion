/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface HFSymptomFixManager : NSObject

{
    NSMutableSet *_items;
}

@property (nonatomic, readonly) NSMutableSet *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)fixSession:(id)arg1 didChangeState:(long long)arg2;
- (_Bool)anySymptomIsBeingFixedForFixableObject:(id)arg1;
- (id)_itemForSymptom:(id)arg1 accessory:(id)arg2;
- (id)_itemForFixSession:(id)arg1;
- (long long)fixStateForSymptom:(id)arg1 accessory:(id)arg2;
- (void)fixSymptom:(id)arg1 forFixableObject:(id)arg2 presentingViewController:(id)arg3;

@end
