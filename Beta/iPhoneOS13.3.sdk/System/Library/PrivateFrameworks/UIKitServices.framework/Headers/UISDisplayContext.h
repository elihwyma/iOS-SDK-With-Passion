/*
 Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

#import <Foundation/NSObject.h>

@class FBSDisplayConfiguration, NSString, UISApplicationSupportDisplayEdgeInfo;

@interface UISDisplayContext : NSObject

{
    FBSDisplayConfiguration *_displayConfiguration;
    UISApplicationSupportDisplayEdgeInfo *_displayEdgeInfo;
    unsigned long long _artworkSubtype;
    unsigned long long _userInterfaceStyle;
}

@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo;
@property (nonatomic, readonly) unsigned long long artworkSubtype;
@property (nonatomic, readonly) unsigned long long userInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultContext;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1 displayEdgeInfo:(id)arg2;
- (id)_initWithDisplayContext:(id)arg1;

@end
