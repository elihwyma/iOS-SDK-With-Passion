/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, WFImage;

@protocol OS_dispatch_queue;

@interface ICApp : NSObject

{
    _Bool _installed;
    _Bool _checkedInstallStatus;
    NSArray *_schemes;
    NSArray *_shareExtensions;
    NSString *_localizedName;
    WFImage *_icon;
    NSString *_identifier;
    NSDictionary *_definition;
    NSObject<OS_dispatch_queue> *_stateAccessQueue;
}

@property (retain, nonatomic) WFImage *icon;
@property (nonatomic) _Bool checkedInstallStatus;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *definition;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSArray *allBundleIdentifiers;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) NSString *localizedShortName;
@property (nonatomic, readonly) NSString *iTunesIdentifier;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSArray *schemes;
@property (nonatomic, readonly) NSArray *exportedFileTypes;
@property (nonatomic, readonly) NSArray *documentTypes;
@property (nonatomic, readonly) NSArray *documentActions;
@property (nonatomic, readonly) NSArray *shareExtensions;
@property (nonatomic, readonly) NSArray *metadata;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, getter=isInstalled) _Bool installed;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2;
- (id)bundleIdentifiersByIdiom;
- (id)localizedString:(id)arg1 identifier:(id)arg2;
- (id)schemeNamed:(id)arg1;
- (void)loadIconWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)determinesInstallStatusViaURLScheme;
- (_Bool)isCurrentlyInstalled;
- (void)resetInstalledStatus;
- (void)updateInstalledStatus;
- (void)openFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openFile:(id)arg1 withAnnotation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadAppInStoreController:(id)arg1 withCampaignToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)identifierFromDictionaryForCurrentIdiom:(id)arg1;

@end
