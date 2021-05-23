/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface DNDSModeAssertionUpdateResult : NSObject

{
    NSArray *_assertions;
    NSArray *_invalidations;
}

@property (copy, nonatomic, readonly) NSArray *assertions;
@property (copy, nonatomic, readonly) NSArray *invalidations;

+ (id)emptyResult;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)resultCombiningWithResult:(id)arg1;
- (id)initWithAssertions:(id)arg1 invalidations:(id)arg2;

@end
