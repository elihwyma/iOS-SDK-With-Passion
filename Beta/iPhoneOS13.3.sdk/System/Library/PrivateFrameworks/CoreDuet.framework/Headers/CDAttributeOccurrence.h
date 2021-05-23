/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CDAttributeOccurrence : NSObject

{
    NSDate *_date;
    NSObject *_value;
}

@property (readonly) NSDate *date;
@property (readonly) NSObject *value;

+ (id)attributeOccurrenceWithValue:(id)arg1 date:(id)arg2;

- (id)initWithValue:(id)arg1 date:(id)arg2;

@end
