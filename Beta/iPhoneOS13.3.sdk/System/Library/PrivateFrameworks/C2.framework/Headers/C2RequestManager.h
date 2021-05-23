/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class C2SessionPool;

@interface C2RequestManager : NSObject

{
    C2SessionPool *_sessionPool;
}

@property (nonatomic, readonly) C2SessionPool *sessionPool;

+ (id)sharedManager;

- (id)init;
- (id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3 sessionHandle:(id *)arg4;
- (void)_testUtility_forTask:(id)arg1 sessionHandle:(id *)arg2 taskHandle:(id *)arg3;
- (id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (id)testUtility_sessionForTask:(id)arg1;
- (id)testUtility_sessionTaskForTask:(id)arg1;

@end
