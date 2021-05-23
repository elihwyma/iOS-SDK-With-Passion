/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSData, NSSet, NSString;

@interface INAppInfo : NSObject <Swift>

{
    NSString *_applicationIdentifier;
    NSString *_companionApplicationIdentifier;
    NSString *_developmentRegion;
    NSSet *_supportedActions;
    NSSet *_supportedActionsByExtensions;
    NSSet *_actionsRestrictedWhileLocked;
    NSSet *_actionsRestrictedWhileProtectedDataUnavailable;
    NSSet *_supportedMediaCategories;
    NSSet *_definedIntents;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *companionApplicationIdentifier;
@property (copy, nonatomic) NSString *developmentRegion;
@property (copy, nonatomic) NSSet *supportedActions;
@property (copy, nonatomic) NSSet *supportedActionsByExtensions;
@property (copy, nonatomic) NSSet *actionsRestrictedWhileLocked;
@property (copy, nonatomic) NSSet *actionsRestrictedWhileProtectedDataUnavailable;
@property (copy, nonatomic) NSSet *supportedMediaCategories;
@property (copy, nonatomic) NSSet *definedIntents;
@property (copy, nonatomic, readonly) NSData *data;

+ (_Bool)supportsSecureCoding;
+ (id)appInfoWithAppProxy:(id)arg1;
+ (id)appInfoWithData:(id)arg1 error:(id *)arg2;
+ (id)appInfoWithIntent:(id)arg1;
+ (id)_appInfoWithAppProxy:(id)arg1 plugInKitPlugins:(id)arg2 userActivityTypes:(id)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
