/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface _NSAttributes : NSObject

{
    NSDictionary *_attributes;
    struct _NSRange _range;
}

- (void)dealloc;
- (id)initWithAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)setAttributesInTextStorage:(id)arg1;

@end
