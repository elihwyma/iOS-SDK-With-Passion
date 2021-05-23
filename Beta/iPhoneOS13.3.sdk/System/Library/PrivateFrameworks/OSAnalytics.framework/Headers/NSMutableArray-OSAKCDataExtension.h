/*
 Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (OSAKCDataExtension)

- (id)parent;
- (void)push:(id)arg1;
- (id)top;
- (id)pop;
- (void)addImage:(unsigned char [16])arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void)sortByAddressAndSetInferredSizes;
- (void)section_push:(id)arg1;
- (id)section_pop;

@end
