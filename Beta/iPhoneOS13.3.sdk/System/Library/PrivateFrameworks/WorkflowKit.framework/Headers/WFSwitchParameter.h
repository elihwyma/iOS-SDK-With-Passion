/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class NSString;

@interface WFSwitchParameter : WFParameter

{
    NSString *_localizedOnDisplayName;
    NSString *_localizedOffDisplayName;
}

@property (nonatomic, readonly) NSString *localizedOnDisplayName;
@property (nonatomic, readonly) NSString *localizedOffDisplayName;

+ (id)defaultOffDisplayName;
+ (id)defaultOnDisplayName;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end
