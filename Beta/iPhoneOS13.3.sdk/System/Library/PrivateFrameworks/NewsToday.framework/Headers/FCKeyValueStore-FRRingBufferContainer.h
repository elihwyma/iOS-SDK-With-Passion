/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsCore/FCKeyValueStore.h>

@class NSString;

@interface FCKeyValueStore (FRRingBufferContainer)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)minForKey:(id)arg1;
- (double)maxForKey:(id)arg1;
- (id)ringBufferForKey:(id)arg1 capacity:(unsigned long long)arg2;
- (id)ringBufferForKey:(id)arg1;
- (void)setRingBuffers:(id)arg1;
- (_Bool)hasMinForKey:(id)arg1;
- (_Bool)hasMaxForKey:(id)arg1;

@end
