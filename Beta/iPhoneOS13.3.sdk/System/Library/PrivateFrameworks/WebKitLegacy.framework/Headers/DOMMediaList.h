/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@class NSString;

@interface DOMMediaList : DOMObject

@property (copy) NSString *mediaText;
@property (readonly) unsigned int length;

- (void)dealloc;
- (id)item:(unsigned int)arg1;
- (void)deleteMedium:(id)arg1;
- (void)appendMedium:(id)arg1;

@end
