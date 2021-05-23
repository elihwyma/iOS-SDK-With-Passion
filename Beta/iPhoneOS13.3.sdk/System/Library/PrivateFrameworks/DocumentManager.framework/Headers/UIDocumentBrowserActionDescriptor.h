/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@class NSPredicate, NSString;

@interface UIDocumentBrowserActionDescriptor : NSObject

{
    _Bool _displayInline;
    NSString *_uiActionProviderIdentifier;
    NSString *_fileProviderIdentifier;
    NSString *_identifier;
    NSString *_displayName;
    NSPredicate *_predicate;
}

@property (nonatomic, readonly) NSString *uiActionProviderIdentifier;
@property (nonatomic, readonly) NSString *fileProviderIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) _Bool displayInline;

- (id)initWithIdentifier:(id)arg1 uiActionProviderIdentifier:(id)arg2 fileProviderIdentifier:(id)arg3 displayName:(id)arg4 predicate:(id)arg5 displayInline:(_Bool)arg6;

@end
