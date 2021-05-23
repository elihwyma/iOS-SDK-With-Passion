/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NSMetadataQueryResultGroup : NSObject

{
    id _private[9];
    unsigned long long _private2[1];
    void *_reserved;
}

@property (copy, readonly) NSString *attribute;
@property (retain, readonly) id value;
@property (copy, readonly) NSArray *subgroups;
@property (readonly) unsigned long long resultCount;
@property (copy, readonly) NSArray *results;

- (void)dealloc;
- (id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4;
- (void)_addResult:(unsigned long long)arg1;
- (id)resultAtIndex:(unsigned long long)arg1;
- (void)_zapResultArray;

@end
