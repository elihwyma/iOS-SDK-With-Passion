/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Foundation/NSObject.h>

@class NSString, PSSpecifier, UIImage;

@interface STStorageTip : NSObject

{
    PSSpecifier *_infoSpecifier;
    NSString *_identifier;
    PSSpecifier *_specifier;
}

@property (retain) NSString *identifier;
@property (retain) PSSpecifier *specifier;
@property (nonatomic, readonly) PSSpecifier *infoSpecifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *infoText;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) long long size;
@property (retain, nonatomic) NSString *representedApp;

- (id)init;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)reload;

@end
