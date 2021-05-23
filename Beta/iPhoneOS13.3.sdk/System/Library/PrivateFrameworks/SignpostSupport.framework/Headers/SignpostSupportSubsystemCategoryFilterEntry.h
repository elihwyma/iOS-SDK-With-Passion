/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SignpostSupportSubsystemCategoryFilterEntry : NSObject

{
    NSString *_subsystem;
    NSString *_category;
}

@property (nonatomic, readonly) NSString *subsystem;
@property (nonatomic, readonly) NSString *category;

- (id)initWithSubsystem:(id)arg1 category:(id)arg2;

@end
