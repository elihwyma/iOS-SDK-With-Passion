/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@interface TKUtils : NSObject

+ (id)decompressData:(id)arg1 algorithm:(int)arg2;
+ (id)decompressData:(id)arg1 algorithm:(int)arg2 operation:(int)arg3;
+ (id)uniqueKeyForURL:(id)arg1;
+ (_Bool)decompressFile:(id)arg1 toDestinationPath:(id)arg2 algorithm:(int)arg3;
+ (id)applicationLibraryPath;
+ (id)httpDataURLEncoded:(id)arg1;
+ (id)URL:(id)arg1 withQueryParameters:(id)arg2 addKeys:(id)arg3 removeKeys:(id)arg4 escape:(_Bool)arg5;
+ (id)hexForColor:(id)arg1 withAlpha:(_Bool)arg2;

@end
