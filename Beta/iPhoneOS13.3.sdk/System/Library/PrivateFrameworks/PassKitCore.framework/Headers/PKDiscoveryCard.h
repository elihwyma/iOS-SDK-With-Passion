/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, PKColor, PKDiscoveryCallToAction, PKDiscoveryMedia;

@interface PKDiscoveryCard : NSObject <Swift>

{
    NSString *_headingKey;
    NSString *_titleKey;
    NSString *_inlineDescriptionKey;
    PKDiscoveryMedia *_backgroundMedia;
    PKColor *_backgroundColor;
    PKDiscoveryCallToAction *_callToAction;
    long long _foregroundContentMode;
    NSString *_heading;
    NSString *_title;
    NSString *_inlineDescription;
}

@property (retain, nonatomic) NSString *heading;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) NSString *headingKey;
@property (nonatomic, readonly) NSString *titleKey;
@property (nonatomic, readonly) NSString *inlineDescriptionKey;
@property (nonatomic, readonly) PKDiscoveryMedia *backgroundMedia;
@property (nonatomic, readonly) PKColor *backgroundColor;
@property (nonatomic, readonly) PKDiscoveryCallToAction *callToAction;
@property (nonatomic, readonly) long long foregroundContentMode;
@property (nonatomic, readonly) NSString *inlineDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;

@end
