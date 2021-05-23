/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString, _CDClientContext, _CDContextualKeyPath;

@interface ATXContextStoreWriter : NSObject

{
    _CDClientContext *_context;
    _CDContextualKeyPath *_keyPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)setWithObject:(id)arg1;
- (id)initWithContext:(id)arg1 keyPath:(id)arg2;

@end
