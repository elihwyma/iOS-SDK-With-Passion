/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSArray.h>

@class CSDecoder, NSString;

@interface CSSearchableItemCodedArray : NSArray

{
    CSDecoder *_items;
    CSDecoder *_itemsContent;
    NSString *_bundleID;
    NSString *_protectionClass;
    CDStruct_b7fac349 _obj;
}

@property (nonatomic, readonly) CDStruct_b7fac349 obj;
@property (nonatomic, readonly) CSDecoder *items;
@property (nonatomic, readonly) CSDecoder *itemsContent;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *protectionClass;

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 itemsContent:(id)arg2;

@end
