/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSSOSLogger : NSObject

{
    NSString *_sosURLString;
}

@property (retain, nonatomic) NSString *sosURLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logger;
+ (id)loggerWithURLString:(id)arg1;

- (void)logMetric:(id)arg1;
- (id)initWithSOSURLString:(id)arg1;

@end
