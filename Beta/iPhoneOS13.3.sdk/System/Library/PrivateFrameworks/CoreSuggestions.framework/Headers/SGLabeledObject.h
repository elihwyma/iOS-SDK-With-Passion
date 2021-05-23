/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGObject.h>

@class NSString, SGExtractionInfo;

@interface SGLabeledObject : SGObject

{
    NSString *_label;
    SGExtractionInfo *_extractionInfo;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) SGExtractionInfo *extractionInfo;
@property (nonatomic, readonly) unsigned long long extractionType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedLabel;
- (id)initWithLabel:(id)arg1 extractionInfo:(id)arg2 recordId:(id)arg3;
- (id)initWithLabel:(id)arg1 extractionType:(unsigned long long)arg2 recordId:(id)arg3 origin:(id)arg4;
- (_Bool)isEqualToLabeledObject:(id)arg1;

@end
