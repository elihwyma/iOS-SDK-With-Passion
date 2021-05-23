/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MSRadarURLBuilder : NSObject

{
    _Bool _prependSystemVersionToTitle;
    _Bool _appendStandardDisclaimerToDescription;
    _Bool _appendSysdiagnoseHowTo;
    NSString *_title;
    NSString *_radarDescription;
    long long _component;
    long long _reproducibility;
    long long _classification;
    NSArray *_extensionIdentifiers;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) _Bool prependSystemVersionToTitle;
@property (copy, nonatomic) NSString *radarDescription;
@property (nonatomic) _Bool appendStandardDisclaimerToDescription;
@property (nonatomic) _Bool appendSysdiagnoseHowTo;
@property (nonatomic) long long component;
@property (nonatomic) long long reproducibility;
@property (nonatomic) long long classification;
@property (copy, nonatomic) NSArray *extensionIdentifiers;

+ (id)radarURLWithBuilder:(CDUnknownBlockType)arg1;
+ (id)_componentInfoDictionaryFromComponent:(long long)arg1;
+ (id)stringFromRadarClassification:(long long)arg1;
+ (id)stringFromRadarReproducibility:(long long)arg1;
+ (id)_URLFromQueryItems:(id)arg1 builder:(id)arg2;
+ (_Bool)canOpenRadar;
+ (id)componentNameFromRadarComponent:(long long)arg1;
+ (id)componentIDFromRadarComponent:(long long)arg1;

- (id)init;

@end
