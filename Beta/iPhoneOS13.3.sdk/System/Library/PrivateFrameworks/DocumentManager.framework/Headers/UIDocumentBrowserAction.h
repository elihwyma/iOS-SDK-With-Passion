/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate, NSString, UIDocumentBrowserActionDescriptor, UIImage;

@interface UIDocumentBrowserAction : NSObject

{
    _Bool _supportsMultipleItems;
    _Bool _requiresResolvedItems;
    _Bool _requiresVersioning;
    _Bool _performActionExitsEditMode;
    NSString *_identifier;
    NSString *_localizedTitle;
    long long _availability;
    UIImage *_image;
    NSArray *_supportedContentTypes;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _resolvedHandler;
    CDUnknownBlockType _unresolvedHandler;
    NSString *_uiActionProviderIdentifier;
    long long _style;
    long long _navigationSide;
    unsigned long long _menuSortOrder;
    NSPredicate *_filteringPredicate;
    long long _actionStyle;
    UIDocumentBrowserActionDescriptor *_uiActionDescriptor;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedTitle;
@property (nonatomic) long long availability;
@property (nonatomic) _Bool requiresResolvedItems;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (copy, nonatomic) CDUnknownBlockType resolvedHandler;
@property (copy, nonatomic) CDUnknownBlockType unresolvedHandler;
@property (copy, nonatomic) NSString *uiActionProviderIdentifier;
@property (nonatomic) long long style;
@property (nonatomic) long long navigationSide;
@property (nonatomic) _Bool requiresVersioning;
@property (nonatomic) unsigned long long menuSortOrder;
@property (retain, nonatomic) NSPredicate *filteringPredicate;
@property (nonatomic) _Bool performActionExitsEditMode;
@property (nonatomic) long long actionStyle;
@property (retain, nonatomic) UIDocumentBrowserActionDescriptor *uiActionDescriptor;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *supportedContentTypes;
@property (nonatomic) _Bool supportsMultipleItems;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 resolvedHandler:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 availability:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithUIActionDescriptor:(id)arg1;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 unresolvedHandler:(CDUnknownBlockType)arg3;

@end
