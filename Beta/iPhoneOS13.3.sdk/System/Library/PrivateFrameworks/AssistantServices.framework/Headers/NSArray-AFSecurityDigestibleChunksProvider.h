/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (AFSecurityDigestibleChunksProvider)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)af_arrayByMappingWithBlock:(CDUnknownBlockType)arg1;

@end
