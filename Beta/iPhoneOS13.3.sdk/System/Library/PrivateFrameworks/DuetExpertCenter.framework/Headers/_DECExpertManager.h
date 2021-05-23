/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _DECExpertManager : NSObject

{
    NSArray *_experts;
}

+ (id)sharedInstance;

- (id)init;
- (id)_createExperts;

@end
