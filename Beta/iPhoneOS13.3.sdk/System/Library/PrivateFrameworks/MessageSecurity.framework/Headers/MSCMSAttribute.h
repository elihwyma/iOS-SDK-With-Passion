/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class MSOID, NSArray, NSData;

@interface MSCMSAttribute : NSObject

{
    MSOID *_attributeType;
    NSArray *_attributeValues;
    NSData *_attributeDERData;
    struct Attribute *_encodedAttribute;
}

@property (retain) NSData *attributeDERData;
@property struct Attribute *encodedAttribute;
@property (retain, readonly) MSOID *attributeType;
@property (retain, readonly) NSArray *attributeValues;

+ (id)decodeAttribute:(struct Attribute *)arg1 error:(id *)arg2;

- (void)dealloc;
- (id)encodeAttributeWithError:(id *)arg1;
- (struct Attribute *)generateAttributeStruct;
- (id)initWithAttributeStruct:(struct Attribute *)arg1 error:(id *)arg2;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;
- (id)initWithDER:(id)arg1;
- (id)initWithAttributeType:(id)arg1 values:(id)arg2;

@end
