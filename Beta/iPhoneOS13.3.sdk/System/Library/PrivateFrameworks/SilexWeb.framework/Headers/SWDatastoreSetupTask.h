/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWDatastoreManager, SWScriptsManager;

@interface SWDatastoreSetupTask : NSObject

{
    id <SWDatastoreManager> _datastoreManager;
    id <SWScriptsManager> _scriptsManager;
}

@property (nonatomic, readonly) id <SWDatastoreManager> datastoreManager;
@property (nonatomic, readonly) id <SWScriptsManager> scriptsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;

- (void)performSetup;
- (id)initWithDatastoreManager:(id)arg1 scriptsManager:(id)arg2;

@end
