/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSObject (PXReusableObject)

@property (nonatomic, setter=_px_setReuseIdentifier:) long long _px_reuseIdentifier;
@property (readonly) NSString *px_descriptionForAssertionMessage;

+ (id)px_descriptionForAssertionMessage;
+ (void)px_swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;
+ (void)px_performOnceForFirstAncestorClassSubclassOf:(Class)arg1 context:(void *)arg2 block:(CDUnknownBlockType)arg3;
+ (void)px_enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;

@end
