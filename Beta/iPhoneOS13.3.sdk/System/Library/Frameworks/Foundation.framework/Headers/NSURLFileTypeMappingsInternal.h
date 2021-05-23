/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface NSURLFileTypeMappingsInternal : NSObject

{
    NSDictionary *MIMETypeToExtensionList;
    NSDictionary *extensionToMIMEType;
}

- (id)init;

@end
