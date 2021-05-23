/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SXConditionValidatorManager : NSObject

{
    NSMutableArray *_validators;
}

@property (nonatomic, readonly) NSMutableArray *validators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)validateCondition:(id)arg1 context:(id)arg2;
- (void)addConditionValidator:(id)arg1;

@end
