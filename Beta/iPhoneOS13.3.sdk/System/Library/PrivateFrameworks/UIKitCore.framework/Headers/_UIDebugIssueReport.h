/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugIssueReport : NSObject

{
    NSMutableArray *_mutableIssues;
}

@property (copy, nonatomic, readonly) NSArray *issues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addIssue:(id)arg1;

@end
