/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class CSCoder, NSData;

@interface SGSearchableItemSerializedAttributes : NSObject

{
    NSData *_attributeSetData;
    CSCoder *_attributeSetCoder;
    NSData *_htmlContentData;
}

@property (nonatomic, readonly) NSData *attributeSetData;
@property (nonatomic, readonly) CSCoder *attributeSetCoder;
@property (nonatomic, readonly) NSData *htmlContentData;

+ (id)serializedAttributesWithAttributeSetData:(id)arg1 attributeSetCoder:(id)arg2 htmlContentData:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttributeSetData:(id)arg1 attributeSetCoder:(id)arg2 htmlContentData:(id)arg3;
- (_Bool)isEqualToSerializedAttributes:(id)arg1;

@end
