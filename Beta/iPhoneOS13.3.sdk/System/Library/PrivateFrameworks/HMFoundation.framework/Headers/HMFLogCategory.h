/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_log;

@interface HMFLogCategory : NSObject

{
    NSObject<OS_os_log> *_internal;
    NSString *_loggingCategory;
    NSString *_loggingSubsystem;
}

@property (nonatomic, readonly) NSString *loggingSubsystem;
@property (nonatomic, readonly) NSObject<OS_os_log> *internal;
@property (nonatomic, readonly) NSString *loggingCategory;

+ (void)initialize;
+ (id)categoryWithName:(id)arg1 inSubsystem:(id)arg2;
+ (id)categoryWithName:(id)arg1;
+ (id)defaultCategory;

- (id)initCategory:(id)arg1 inSubsystem:(id)arg2;

@end
