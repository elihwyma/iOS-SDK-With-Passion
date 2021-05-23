/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXFirstViewportLayoutInstruction : NSObject

{
    _Bool _fullfilled;
}

@property (nonatomic) _Bool fullfilled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isFulfilledForBlueprint:(id)arg1;
- (void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2;

@end
