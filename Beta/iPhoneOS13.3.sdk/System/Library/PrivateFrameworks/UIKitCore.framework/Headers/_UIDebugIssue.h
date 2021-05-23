/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, _UIDebugIssueReport;

__attribute__((visibility("hidden")))
@interface _UIDebugIssue : NSObject

{
    NSString *_description;
    NSString *_prefix;
    _UIDebugIssueReport *_subissueReport;
}

@property (nonatomic, readonly, getter=_subissueReport) _UIDebugIssueReport *subissueReport;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic, readonly) NSArray *subissues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *debugDescription;

+ (id)issueWithDescription:(id)arg1;
+ (id)issueWithFormat:(id)arg1;

- (id)init;
- (void)addIssue:(id)arg1;

@end
