/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFDatabaseResult.h>

@class NSSortDescriptor, NSString;

@interface WFRealmDatabaseResult : WFDatabaseResult

{
    Class _objectClass;
    NSString *_predicateFormat;
    NSSortDescriptor *_sortDescriptor;
}

@property (nonatomic, readonly) Class objectClass;
@property (copy, nonatomic, readonly) NSString *predicateFormat;
@property (copy, nonatomic, readonly) NSSortDescriptor *sortDescriptor;

- (id)initWithBackingStore:(id)arg1 objectClass:(Class)arg2 predicateFormat:(id)arg3 sortDescriptor:(id)arg4;
- (void)notifyObserversAboutChange:(id)arg1;

@end
