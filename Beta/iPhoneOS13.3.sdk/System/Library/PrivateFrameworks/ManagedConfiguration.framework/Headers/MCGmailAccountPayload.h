/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSString;

@interface MCGmailAccountPayload : MCPayload

{
    NSString *_accountDescription;
    NSString *_accountName;
    NSString *_emailAddress;
    NSDictionary *_communicationServiceRules;
}

@property (retain, nonatomic, readonly) NSString *accountDescription;
@property (retain, nonatomic, readonly) NSString *accountName;
@property (retain, nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSDictionary *communicationServiceRules;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)restrictions;
- (_Bool)mustInstallNonInteractively;

@end
