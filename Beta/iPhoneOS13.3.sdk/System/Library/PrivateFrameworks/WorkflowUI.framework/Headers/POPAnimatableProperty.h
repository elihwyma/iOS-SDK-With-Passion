/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString;

@interface POPAnimatableProperty : NSObject <Swift>

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) CDUnknownBlockType readBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType writeBlock;
@property (nonatomic, readonly) double threshold;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)propertyWithName:(id)arg1 initializer:(CDUnknownBlockType)arg2;
+ (id)propertyWithName:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
