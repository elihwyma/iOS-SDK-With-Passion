/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, WFAction;

@interface WFActionRequest : NSObject

{
    NSString *_actionIdentifier;
    NSDictionary *_serializedParameters;
    WFAction *_result;
}

@property (retain, nonatomic) WFAction *result;
@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSDictionary *serializedParameters;

- (id)description;
- (id)initWithActionIdentifier:(id)arg1 serializedParameters:(id)arg2;

@end
