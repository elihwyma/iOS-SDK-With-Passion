/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WFActionSearchGroup : NSObject

{
    NSString *_identifier;
    NSString *_localizedName;
    NSArray *_actions;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) NSArray *actions;

- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 actions:(id)arg3;

@end
