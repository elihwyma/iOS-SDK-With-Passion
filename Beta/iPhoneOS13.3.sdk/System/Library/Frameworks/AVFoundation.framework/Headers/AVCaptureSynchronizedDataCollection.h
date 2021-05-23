/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureSynchronizedDataCollectionInternal;

@interface AVCaptureSynchronizedDataCollection : NSObject

{
    AVCaptureSynchronizedDataCollectionInternal *_internal;
}

@property (readonly) unsigned long long count;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)_shortStringForDataOutput:(id)arg1 syncedData:(id)arg2;
- (id)_shortStringForDataDroppedReason:(long long)arg1;
- (id)synchronizedDataForCaptureOutput:(id)arg1;
- (id)_initWithPossibleDataOutputs:(id)arg1;
- (void)_setSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2;

@end
