/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface WFNumberWrapper : NSObject

{
    NSNumber *_number;
}

@property (nonatomic, readonly) NSNumber *number;

+ (id)wrapperWithNumber:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
