/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSMultiReadUniWriteLock.h>

@interface NSMultiReadUniWriteLock (IDSFoundationUtils)

- (void)performReadingBlock:(CDUnknownBlockType)arg1;
- (void)performWritingBlock:(CDUnknownBlockType)arg1;

@end
