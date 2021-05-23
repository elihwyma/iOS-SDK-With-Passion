/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class RLMArray;

@interface RLMListBase : NSObject <Swift>

{
    struct unique_ptr<RLMObservationInfo, std::__1::default_delete<RLMObservationInfo>> _observationInfo;
    RLMArray *__rlmArray;
}

@property (retain, nonatomic) RLMArray *_rlmArray;

- (id)initWithArray:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectsAtIndexes:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id).cxx_construct;

@end
