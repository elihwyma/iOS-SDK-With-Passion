/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSStoreMapNode.h>

__attribute__((visibility("hidden")))
@interface NSDictionaryMapNode : NSStoreMapNode

{
    id *_attributes;
    id _attributesAsEncoded;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)_doAttributeDecoding;
- (id)initWithValues:(id *)arg1 objectID:(id)arg2;
- (const id *)attributeValues;

@end
