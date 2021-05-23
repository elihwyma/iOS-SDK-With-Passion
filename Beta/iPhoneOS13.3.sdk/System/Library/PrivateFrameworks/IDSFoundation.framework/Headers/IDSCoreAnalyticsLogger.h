/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSCoreAnalyticsLogger : NSObject

{
    NSString *_domain;
}

@property (nonatomic, readonly) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultLogger;

- (id)initWithDomain:(id)arg1;
- (void)logMetric:(id)arg1;

@end
