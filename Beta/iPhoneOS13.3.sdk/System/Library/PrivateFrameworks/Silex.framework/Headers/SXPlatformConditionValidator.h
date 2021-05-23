/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXPlatformConditionValidator : NSObject

{
    NSString *_platform;
}

@property (copy, nonatomic, readonly) NSString *platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPlatform:(id)arg1;
- (_Bool)validateCondition:(id)arg1 context:(id)arg2;

@end
