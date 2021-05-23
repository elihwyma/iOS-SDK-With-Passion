/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@interface PKZipArchiver : NSObject

+ (void)noteBOMCopier:(struct _BOMCopier *)arg1 succeeded:(_Bool)arg2;
+ (void)associateBOMCopier:(struct _BOMCopier *)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)disassociateBOMCopier:(struct _BOMCopier *)arg1;

- (void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)zippedDataForURL:(id)arg1;

@end
