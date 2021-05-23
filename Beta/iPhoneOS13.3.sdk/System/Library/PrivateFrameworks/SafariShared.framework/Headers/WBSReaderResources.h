/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSReaderResources : NSObject

+ (struct OpaqueJSScript *)sharedUIScriptForContext:(struct OpaqueJSContext *)arg1;
+ (struct OpaqueJSScript *)articleFinderScriptForContext:(struct OpaqueJSContext *)arg1;
+ (id)readerHTMLSourceURL;
+ (id)localizedStringsScriptURL;
+ (struct OpaqueJSScript *)sharedUINormalWorldScriptForContext:(struct OpaqueJSContext *)arg1;

@end
