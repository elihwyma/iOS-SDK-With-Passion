/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface CSDecoder : NSObject

{
    NSData *_data;
    id _backingStore;
    const struct __CFAllocator *_contentDeallocator;
    CDStruct_b7fac349 _obj;
}

@property (nonatomic, readonly) CDStruct_b7fac349 obj;
@property (nonatomic, readonly) const struct __CFAllocator *contentDeallocator;
@property (nonatomic, readonly) NSData *data;
@property (retain, nonatomic) id backingStore;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)initWithData:(id)arg1;
- (id)decodeObject:(CDStruct_b7fac349)arg1;
- (id)decodeObjectNoCopy:(CDStruct_b7fac349)arg1;
- (id)initWithData:(id)arg1 obj:(CDStruct_b7fac349)arg2;
- (id)decode;

@end
