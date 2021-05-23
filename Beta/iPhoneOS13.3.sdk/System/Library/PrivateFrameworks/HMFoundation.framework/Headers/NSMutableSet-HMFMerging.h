/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSMutableSet.h>

@class NSString;

@interface NSMutableSet (HMFMerging)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)mergeObject:(id)arg1;
- (_Bool)shouldMergeObject:(id)arg1;

@end
