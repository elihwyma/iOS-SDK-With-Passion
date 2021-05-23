/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSDictionary, NSString;

@interface MCWebContentFilterPayload : MCPayload

{
    _Bool _autoFilterEnabled;
    _Bool _filterBrowsers;
    _Bool _filterSockets;
    NSString *_filterType;
    NSArray *_permittedURLStrings;
    NSArray *_whitelistedBookmarks;
    NSArray *_blacklistedURLStrings;
    NSDictionary *_pluginConfiguration;
    NSString *_name;
    NSString *_pluginBundleID;
}

@property (copy, nonatomic) NSString *filterType;
@property (nonatomic) _Bool autoFilterEnabled;
@property (retain, nonatomic) NSArray *permittedURLStrings;
@property (retain, nonatomic) NSArray *whitelistedBookmarks;
@property (retain, nonatomic) NSArray *blacklistedURLStrings;
@property (retain, nonatomic) NSDictionary *pluginConfiguration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *pluginBundleID;
@property (nonatomic) _Bool filterBrowsers;
@property (nonatomic) _Bool filterSockets;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;
+ (id)pluginFilterKeysAndClasses;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)restrictions;
- (id)installationWarnings;

@end
