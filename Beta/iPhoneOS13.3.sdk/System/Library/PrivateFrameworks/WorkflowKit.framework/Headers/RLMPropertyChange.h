/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RLMPropertyChange : NSObject

{
    NSString *_name;
    id _previousValue;
    id _value;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) id previousValue;
@property (retain, nonatomic) id value;

@end
