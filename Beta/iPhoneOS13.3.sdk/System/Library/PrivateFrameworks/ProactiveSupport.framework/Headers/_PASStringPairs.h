/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _PASStringPairs : NSObject

{
    NSArray *_keys;
    NSArray *_values;
}

@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) NSArray *values;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)initWithKeys:(id)arg1 values:(id)arg2;

@end
