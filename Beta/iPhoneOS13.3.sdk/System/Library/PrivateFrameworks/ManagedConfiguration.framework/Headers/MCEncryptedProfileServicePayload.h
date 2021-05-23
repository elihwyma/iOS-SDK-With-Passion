/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCEncryptedProfileServicePayload : MCPayload

{
    NSString *_urlString;
}

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)title;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)initWithURLString:(id)arg1 profile:(id)arg2;

@end
