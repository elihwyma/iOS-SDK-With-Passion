/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFBlockBasedReadPolicy : NSObject

{
    CDUnknownBlockType _readPolicyBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType readPolicyBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;
- (id)initWithReadPolicyBlock:(CDUnknownBlockType)arg1;

@end
