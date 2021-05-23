/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NSMetadataItem : NSObject

{
    id _item;
    void *_reserved;
}

@property (copy, readonly) NSArray *attributes;

- (void)dealloc;
- (void)_setQuery:(id)arg1;
- (id)_item;
- (id)_init:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForAttribute:(id)arg1;
- (id)valuesForAttributes:(id)arg1;

@end
