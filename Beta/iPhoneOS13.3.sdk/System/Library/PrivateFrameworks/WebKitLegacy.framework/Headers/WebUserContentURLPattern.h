/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject

{
    WebUserContentURLPatternPrivate *_private;
}

- (void)dealloc;
- (_Bool)isValid;
- (id)scheme;
- (id)host;
- (_Bool)matchesURL:(id)arg1;
- (id)initWithPatternString:(id)arg1;
- (_Bool)matchesSubdomains;

@end
