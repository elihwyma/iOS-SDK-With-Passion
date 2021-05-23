/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface _NSMetadataQueryResultArray : NSArray

{
    id _query;
    int _rc;
}

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)_init:(id)arg1;

@end
