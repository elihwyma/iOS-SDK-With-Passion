/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject

{
    id _attr;
    id _value;
    unsigned long long _count;
    void *_reserved;
}

@property (copy, readonly) NSString *attribute;
@property (retain, readonly) id value;
@property (readonly) unsigned long long count;

- (void)dealloc;
- (id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4;

@end
