/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSMutableArray.h>

@interface MSCMSMutableAttributeArray : NSMutableArray

{
    NSMutableArray *_attributes;
    struct Attribute *_encodedAttributes;
    NSMutableArray *_genericAttributes;
}

@property (retain) NSMutableArray *attributes;
@property struct Attribute *encodedAttributes;
@property (retain) NSMutableArray *genericAttributes;

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)reset;
- (void)removeAttributes:(id)arg1;
- (struct Attribute *)encodeAttributesWithError:(id *)arg1;
- (id)calculateAttributesWithDigest:(id)arg1 error:(id *)arg2;
- (id)getAttributesWithType:(id)arg1;

@end
