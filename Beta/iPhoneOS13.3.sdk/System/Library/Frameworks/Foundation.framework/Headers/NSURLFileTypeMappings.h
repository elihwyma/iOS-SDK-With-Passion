/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject

{
    NSURLFileTypeMappingsInternal *_internal;
}

+ (id)sharedMappings;

- (id)_init;
- (id)MIMETypeForExtension:(id)arg1;
- (id)_UTIMIMETypeForExtension:(id)arg1;
- (id)_UTIextensionForMIMEType:(id)arg1;
- (id)preferredExtensionForMIMEType:(id)arg1;
- (id)extensionsForMIMEType:(id)arg1;

@end
