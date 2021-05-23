/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class FBSDisplayConfiguration, NSString, XBDisplayEdgeInsetsWrapper;

@interface XBLaunchStateRequest : NSObject

{
    FBSDisplayConfiguration *_displayConfiguration;
    NSString *_groupID;
    long long _interfaceOrientation;
    long long _userInterfaceStyle;
    XBDisplayEdgeInsetsWrapper *_customSafeAreaInsets;
    unsigned long long _statusBarState;
    NSString *_urlSchemeName;
    NSString *_launchInterfaceIdentifier;
    struct CGSize _referenceSize;
    struct CGSize _naturalSize;
}

@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) struct CGSize referenceSize;
@property (nonatomic) struct CGSize naturalSize;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long userInterfaceStyle;
@property (retain, nonatomic) XBDisplayEdgeInsetsWrapper *customSafeAreaInsets;
@property (nonatomic) unsigned long long statusBarState;
@property (copy, nonatomic) NSString *urlSchemeName;
@property (copy, nonatomic) NSString *launchInterfaceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
