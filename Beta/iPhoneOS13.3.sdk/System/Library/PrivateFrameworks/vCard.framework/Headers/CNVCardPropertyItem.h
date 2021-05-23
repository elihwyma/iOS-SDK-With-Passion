/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNVCardPropertyItem : NSObject

{
    id _value;
    NSString *_label;
    NSString *_identifier;
}

@property (readonly) id value;
@property (readonly) NSString *label;
@property (readonly) NSString *identifier;

+ (id)itemWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3;

- (id)description;
- (id)initWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3;

@end
