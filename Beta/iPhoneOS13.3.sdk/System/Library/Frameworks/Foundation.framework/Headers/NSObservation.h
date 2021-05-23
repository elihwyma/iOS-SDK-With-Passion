/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSObservation : NSObject

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (void)remove;
- (id)initWithObservable:(id)arg1 blockSink:(CDUnknownBlockType)arg2 tag:(int)arg3;
- (id)initWithObservable:(id)arg1 observer:(id)arg2;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (id *)_observerStorage;

@end
