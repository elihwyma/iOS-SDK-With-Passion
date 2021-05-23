/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPTextualAttachment.h>

@class NSString;

@interface TSWPNumberAttachment : TSWPTextualAttachment

{
    int _numberFormat;
    NSString *_stringValue;
}

@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) int numberFormat;

- (void)dealloc;
- (id)copyWithContext:(id)arg1;
- (id)stringEquivalent;
- (id)stringEquivalentWithLayoutParent:(id)arg1;
- (id)stringWithNumber:(unsigned long long)arg1;

@end
