/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class MSOID;

__attribute__((visibility("hidden")))
@interface MSCMSContentTypeAttribute : NSObject

{
    MSOID *_contentType;
}

@property (retain) MSOID *contentType;

+ (id)contentTypeAttributeWithOID:(id)arg1;

- (id)initWithOID:(id)arg1;
- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;

@end
