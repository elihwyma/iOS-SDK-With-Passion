/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCRemovalPasswordPayload : MCPayload

{
    NSString *_removalPasscode;
}

@property (retain, nonatomic) NSString *removalPasscode;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;

@end
