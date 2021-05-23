/*
 Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

#import <NSObject.h>

@class NSExtensionContext;

@interface CacheDeleteServiceInfo : NSObject

{
    _Bool _doNotQuery;
    NSExtensionContext *_extensionContext;
}

@property (nonatomic, readonly) NSExtensionContext *extensionContext;
@property _Bool doNotQuery;

+ (id)serviceInfoWithExtensionContext:(id)arg1;

- (id)initWithExtensionContext:(id)arg1;

@end
