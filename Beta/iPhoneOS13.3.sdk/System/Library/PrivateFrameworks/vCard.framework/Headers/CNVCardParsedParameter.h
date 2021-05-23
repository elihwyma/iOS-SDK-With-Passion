/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CNVCardParsedParameter : NSObject

{
    NSString *_name;
    NSArray *_values;
}

@property (copy, readonly) NSString *name;
@property (copy, readonly) NSArray *values;

+ (id)parameterWithName:(id)arg1 values:(id)arg2;

- (id)description;
- (id)initWithName:(id)arg1 values:(id)arg2;

@end
