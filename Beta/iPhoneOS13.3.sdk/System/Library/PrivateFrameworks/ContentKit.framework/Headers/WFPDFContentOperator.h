/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPDFContentOperator : NSObject

{
    NSString *_name;
    id _value;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id value;

- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)text;

@end
