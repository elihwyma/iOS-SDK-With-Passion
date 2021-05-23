/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNLSApplicationWorkspace, NSString;

@interface _CNUIUserActionUserActivityOpener : NSObject

{
    CNLSApplicationWorkspace *_applicationWorkspace;
}

@property (nonatomic, readonly) CNLSApplicationWorkspace *applicationWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)errorForUnableToOpenUserActivity:(id)arg1 withUnderlyingError:(id)arg2;

- (id)init;
- (id)initWithApplicationWorkspace:(id)arg1;
- (id)openUserActivity:(id)arg1 usingBundleIdentifier:(id)arg2 withScheduler:(id)arg3;

@end
