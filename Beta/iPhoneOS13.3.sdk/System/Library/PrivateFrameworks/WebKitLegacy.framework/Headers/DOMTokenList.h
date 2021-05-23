/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMTokenList : DOMObject

@property (readonly) unsigned int length;
@property (copy) NSString *value;

- (void)dealloc;
- (_Bool)contains:(id)arg1;
- (id)item:(unsigned int)arg1;
- (_Bool)toggle:(id)arg1 force:(_Bool)arg2;

@end
