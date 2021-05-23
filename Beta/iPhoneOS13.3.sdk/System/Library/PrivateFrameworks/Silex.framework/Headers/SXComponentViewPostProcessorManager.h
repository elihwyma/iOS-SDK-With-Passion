/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SXComponentViewPostProcessorManager : NSObject

{
    NSMutableArray *_processors;
}

@property (nonatomic, readonly) NSMutableArray *processors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)processComponent:(id)arg1 view:(id)arg2;
- (void)addProcessor:(id)arg1;
- (void)removeProcessor:(id)arg1;

@end
