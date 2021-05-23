/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCLoggingPayload : MCPayload

{
    NSDictionary *_loggingPayload;
}

@property (nonatomic, readonly) NSDictionary *loggingPayload;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (_Bool)isAllowedToWriteLogging;

@end
