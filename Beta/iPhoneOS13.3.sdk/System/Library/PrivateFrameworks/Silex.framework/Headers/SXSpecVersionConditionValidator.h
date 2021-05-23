/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXSpecVersionConditionValidator : NSObject

{
    NSString *_specVersion;
}

@property (copy, nonatomic, readonly) NSString *specVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)validateCondition:(id)arg1 context:(id)arg2;
- (id)initWithSpecVersion:(id)arg1;

@end
