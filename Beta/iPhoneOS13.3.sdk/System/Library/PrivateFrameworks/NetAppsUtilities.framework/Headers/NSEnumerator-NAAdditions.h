/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSEnumerator.h>

@interface NSEnumerator (NAAdditions)

- (id)na_filter:(CDUnknownBlockType)arg1;
- (id)na_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)na_map:(CDUnknownBlockType)arg1;
- (_Bool)na_any:(CDUnknownBlockType)arg1;
- (void)na_each:(CDUnknownBlockType)arg1;
- (_Bool)na_all:(CDUnknownBlockType)arg1;

@end
