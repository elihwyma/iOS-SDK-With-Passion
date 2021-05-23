/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class BSMutableSettings, NSString, XBDisplayEdgeInsetsWrapper;

@interface XBApplicationSnapshotPredicate : NSObject

{
    BSMutableSettings *_clientSettings;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *launchInterfaceIdentifier;
@property (copy, nonatomic) NSString *requiredOSVersion;
@property (nonatomic) unsigned long long interfaceOrientationMask;
@property (nonatomic) struct CGSize referenceSize;
@property (nonatomic) double imageScale;
@property (nonatomic) unsigned long long contentTypeMask;
@property (nonatomic) unsigned long long statusBarStateMask;
@property (nonatomic) long long userInterfaceStyle;
@property (copy, nonatomic) XBDisplayEdgeInsetsWrapper *customSafeAreaInsets;
@property (nonatomic, getter=isFullScreen) _Bool fullScreen;
@property (nonatomic) unsigned long long statusBarState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)predicate;

- (id)init;
- (_Bool)evaluateWithObject:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)_hasClientObjectForKey:(unsigned long long)arg1;
- (id)_clientObjectForKey:(unsigned long long)arg1;
- (void)_setClientObject:(id)arg1 forKey:(unsigned long long)arg2;
- (void)_removeClientObjectForKey:(unsigned long long)arg1;

@end
