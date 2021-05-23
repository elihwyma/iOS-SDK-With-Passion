/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SXTextStyleAttributesMap : NSObject

{
    NSString *_string;
    NSMutableArray *_attributes;
}

@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSMutableArray *attributes;

- (id)description;
- (id)initWithString:(id)arg1;
- (id)attributedString;
- (void)addAttributes:(id)arg1;
- (id)attributesMapWithAttributesForRange:(struct _NSRange)arg1;

@end
