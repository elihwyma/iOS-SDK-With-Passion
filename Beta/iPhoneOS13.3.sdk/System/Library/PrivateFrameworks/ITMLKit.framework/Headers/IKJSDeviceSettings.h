/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class IKJSRestrictions, NSString;

@protocol IKAppDeviceConfig;

@interface IKJSDeviceSettings : IKJSObject <Swift>

{
    id _restrictionDidChangeToken;
    id <IKAppDeviceConfig> _deviceConfig;
}

@property (weak, nonatomic) id <IKAppDeviceConfig> deviceConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) NSString *language;
@property (retain, nonatomic, readonly) NSString *storefrontCountryCode;
@property (nonatomic, readonly) IKJSRestrictions *restrictions;
@property (retain, nonatomic, readonly) NSString *name;
@property (retain, nonatomic, readonly) NSString *preferredVideoFormat;
@property (retain, nonatomic, readonly) NSString *preferredVideoPreviewFormat;
@property (nonatomic, readonly) struct CGSize Screen;
@property (nonatomic, readonly) IKJSRestrictions *Restrictions;
@property (nonatomic, readonly) struct CGSize screen;

- (void)dealloc;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (void)_restrictionsDidChangeNotification:(id)arg1;
- (id)_formatStringForVideoFormat:(unsigned long long)arg1;
- (id)asPrivateIKJSDeviceSettings;

@end
