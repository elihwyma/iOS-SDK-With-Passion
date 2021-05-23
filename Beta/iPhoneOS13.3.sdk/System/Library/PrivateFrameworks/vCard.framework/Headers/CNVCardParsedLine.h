/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CNVCardParsedLine : NSObject

{
    NSString *_name;
    id _value;
    NSArray *_parameters;
    NSString *_grouping;
    _Bool _isPrimary;
}

@property (copy, readonly) NSString *name;
@property (retain) id value;
@property (copy) NSArray *parameters;
@property _Bool isPrimary;
@property (copy) NSString *grouping;

- (id)description;
- (id)initWithName:(id)arg1;

@end
