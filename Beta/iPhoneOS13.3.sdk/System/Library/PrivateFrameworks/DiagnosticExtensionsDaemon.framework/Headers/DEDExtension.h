/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDExtensionIdentifier, NSString;

@interface DEDExtension : NSObject

{
    NSString *_identifier;
    DEDExtensionIdentifier *_dedExtensionIdentifier;
    NSString *_name;
}

@property (retain) NSString *identifier;
@property (retain) DEDExtensionIdentifier *dedExtensionIdentifier;
@property (retain) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)extensionWithDEExtension:(id)arg1;
+ (id)extensionWithDicionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serialize;

@end
