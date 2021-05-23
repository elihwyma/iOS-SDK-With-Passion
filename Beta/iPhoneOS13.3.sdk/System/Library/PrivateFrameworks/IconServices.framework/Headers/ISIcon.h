/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class ISIconManager, NSArray, NSString;

@protocol ISIconIdentity;

@interface ISIcon : NSObject

@property (readonly) id <ISIconIdentity> _identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) ISIconManager *manager;
@property (nonatomic, readonly) NSArray *decorations;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)applicationIcon;
+ (id)genericDocumentIcon;
+ (id)genericApplicationIcon;
+ (id)transparentIcon;
+ (id)layerUpdateQueue;
+ (struct _LIIconVariantInfo *)variantInfoForSet:(unsigned long long)arg1 count:(unsigned long long *)arg2;
+ (int)findVariantFromSet:(unsigned long long)arg1 deviceIdiom:(unsigned long long)arg2 size:(struct CGSize)arg3 scale:(double)arg4;
+ (id)sizesFromSet:(unsigned long long)arg1;

- (id)_init;
- (void)displayLayer:(id)arg1;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (double)_aspectRatio;
- (unsigned long long)variantOptions;
- (unsigned long long)badgeOptions;
- (id)iconWithDecorations:(id)arg1;

@end
