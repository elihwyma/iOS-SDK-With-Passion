/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservation.h>

@class NSObject;

@protocol NSObservable;

__attribute__((visibility("hidden")))
@interface _NSConcreteBlockSinkObservation : NSObservation

{
    NSObject<NSObservable> *_LHSobservable;
    CDUnknownBlockType _block;
    int _tag;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (void)_receiveBox:(id)arg1;
- (void)finishObserving;
- (void)remove;
- (id)initWithObservable:(id)arg1 blockSink:(CDUnknownBlockType)arg2 tag:(int)arg3;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (id *)_observerStorage;

@end
