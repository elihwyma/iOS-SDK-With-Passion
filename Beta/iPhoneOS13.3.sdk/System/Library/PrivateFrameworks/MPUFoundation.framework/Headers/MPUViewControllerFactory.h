/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPUViewControllerFactory : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (id)dataSourceForViewControllerIdentifier:(id)arg1 withQuery:(id)arg2;
+ (id)configurationForViewControllerIdentifier:(id)arg1;
+ (void)registerViewControllerIdentifier:(id)arg1 withConfiguration:(id)arg2;
+ (id)viewControllerForIdentifier:(id)arg1 withQuery:(id)arg2;
+ (id)viewControllerForIdentifier:(id)arg1 withDataSource:(id)arg2;
+ (id)_existingViewControllerWithRestorationIdentifierPath:(id)arg1;
+ (id)viewControllerForIdentifier:(id)arg1;
+ (id)dataSourceForViewControllerIdentifier:(id)arg1;
+ (void)registerViewControllerIdentifier:(id)arg1 withConfigurationBlock:(CDUnknownBlockType)arg2;
+ (void)registerViewControllerIdentifiers;
+ (id)_allConfigurations;

@end
