/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFStaticReadPolicy : NSObject

{
    unsigned long long _decision;
}

@property (nonatomic, readonly) unsigned long long decision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)policyWithDecision:(unsigned long long)arg1;

- (id)init;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;
- (id)initWithDecision:(unsigned long long)arg1;

@end
