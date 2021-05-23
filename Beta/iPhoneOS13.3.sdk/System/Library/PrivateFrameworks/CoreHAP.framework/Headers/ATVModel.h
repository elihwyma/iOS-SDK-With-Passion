/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ATVModel : NSObject

{
    NSDictionary *_atvLUT;
}

@property (retain) NSDictionary *atvLUT;

+ (void)addTuple:(id)arg1 ToLUT:(id)arg2;
+ (unsigned long long)atvStateFromState:(struct BTStatus *)arg1;

- (id)init;
- (id)findTupleForATVState:(unsigned long long)arg1;

@end
