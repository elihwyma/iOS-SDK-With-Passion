/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (AFSecurityDigestibleChunksProvider)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_af_isSameDayAsDate:(id)arg1;
- (_Bool)af_isToday;
- (_Bool)af_isTomorrow;

@end
