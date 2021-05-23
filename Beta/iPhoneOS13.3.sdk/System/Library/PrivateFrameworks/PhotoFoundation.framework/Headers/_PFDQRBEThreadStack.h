/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class PFDispatchQueue;

@interface _PFDQRBEThreadStack : NSObject

{
    _PFDQRBEThreadStack *_next;
    unsigned long long _currentIndex;
    PFDispatchQueue *_activeQueues[8];
}

+ (void)initialize;
+ (id)stackForCurrentThread;

- (_Bool)isEmpty;
- (void)pushQueue:(id)arg1;
- (void)popQueue;
- (_Bool)containsQueue:(id)arg1;

@end
