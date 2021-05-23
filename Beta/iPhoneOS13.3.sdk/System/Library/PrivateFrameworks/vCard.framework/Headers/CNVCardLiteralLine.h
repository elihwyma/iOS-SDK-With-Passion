/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <vCard/CNVCardLine.h>

@class NSData;

@interface CNVCardLiteralLine : CNVCardLine

{
    NSData *_literalValue;
}

+ (id)lineWithLiteralValue:(id)arg1;

- (void)serializeWithStrategy:(id)arg1;
- (id)initWithLiteralValue:(id)arg1;

@end
