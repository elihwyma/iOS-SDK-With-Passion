/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFNamingComponents : NSObject

{
    _Bool _isAccessory;
    _Bool _isDiscoveredAccessory;
    _Bool _isService;
    _Bool _isChildService;
    _Bool _isServiceGroup;
    _Bool _isMediaContainer;
    _Bool _isTelevision;
    _Bool _allowsEmptyNameTextField;
    _Bool _allowsNullResettableName;
    id _homeKitObject;
    NSString *_name;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool isAccessory;
@property (nonatomic) _Bool isDiscoveredAccessory;
@property (nonatomic) _Bool isService;
@property (nonatomic) _Bool isChildService;
@property (nonatomic) _Bool isServiceGroup;
@property (nonatomic) _Bool isMediaContainer;
@property (nonatomic) _Bool isTelevision;
@property (nonatomic) _Bool allowsEmptyNameTextField;
@property (nonatomic) _Bool allowsNullResettableName;
@property (nonatomic, readonly) id homeKitObject;
@property (nonatomic, readonly) NSString *placeholderText;
@property (nonatomic, readonly) NSString *textFieldDisplayText;
@property (nonatomic, readonly) NSString *defaultName;

+ (id)namingComponentFromAccessory:(id)arg1;
+ (id)namingComponentFromService:(id)arg1;
+ (id)namingComponentFromMediaSystem:(id)arg1;
+ (id)namingComponentFromHomeKitObject:(id)arg1;
+ (id)namingComponentFromServiceGroup:(id)arg1;
+ (id)namingComponentFromDiscoveredAccessory:(id)arg1;

- (id)description;
- (id)categoryName;
- (id)roomName;
- (id)configuredName;
- (id)commitableNameForString:(id)arg1;
- (id)initWithHomeKitObject:(id)arg1;
- (id)homeKitSafeStringForString:(id)arg1;

@end
