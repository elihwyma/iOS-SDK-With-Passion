/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWScriptsManager;

@interface SWScriptsSetupTask : NSObject

{
    id <SWScriptsManager> _scriptsManager;
}

@property (nonatomic, readonly) id <SWScriptsManager> scriptsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;

- (void)performSetup;
- (id)initWithScriptsManager:(id)arg1;

@end
