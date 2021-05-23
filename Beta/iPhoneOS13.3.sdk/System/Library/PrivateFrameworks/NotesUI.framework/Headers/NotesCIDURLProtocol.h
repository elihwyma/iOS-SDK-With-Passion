/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSURLProtocol.h>

@interface NotesCIDURLProtocol : NSURLProtocol

+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)registerDataProvider:(id)arg1 forCIDURL:(id)arg2;
+ (void)unregisterDataProviderForCIDURL:(id)arg1;

- (void)stopLoading;
- (void)startLoading;

@end
