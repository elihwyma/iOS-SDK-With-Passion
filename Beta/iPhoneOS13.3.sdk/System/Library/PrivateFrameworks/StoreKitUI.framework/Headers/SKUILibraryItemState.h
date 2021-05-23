/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SKUILibraryItemState : NSObject <Swift>

{
    long long _availability;
    unsigned long long _avTypes;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    _Bool _highDefinition;
    _Bool _preview;
    _Bool _rental;
    NSNumber *_storeAccountIdentifier;
    NSString *_storeFlavorIdentifier;
    NSString *_storePlatformKind;
    NSNumber *_storeVersionIdentifier;
}

@property (nonatomic, readonly) NSString *itemStateVariantIdentifier;
@property (nonatomic) long long availability;
@property (nonatomic) unsigned long long AVTypes;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (nonatomic, getter=isHighDefinition) _Bool highDefinition;
@property (nonatomic, getter=isPreview) _Bool preview;
@property (nonatomic, getter=isRental) _Bool rental;
@property (copy, nonatomic) NSNumber *storeAccountIdentifier;
@property (copy, nonatomic) NSString *storeFlavorIdentifier;
@property (copy, nonatomic) NSString *storePlatformKind;
@property (copy, nonatomic) NSNumber *storeVersionIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplication:(id)arg1;
- (id)newJavaScriptRepresentation;

@end
