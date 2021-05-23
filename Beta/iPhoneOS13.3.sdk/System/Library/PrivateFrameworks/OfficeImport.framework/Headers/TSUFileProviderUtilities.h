/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUFileProviderUtilities : NSObject

+ (void)initialize;
+ (void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)fetchAlternateContentsURLForDocumentURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)bookmarkableStringFromDocumentURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)init;

@end
