/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface MTPromiseResult : NSObject

{
    NSError *_error;
    id _result;
}

@property (copy, nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) id result;

- (id)initWithResult:(id)arg1 error:(id)arg2;

@end
