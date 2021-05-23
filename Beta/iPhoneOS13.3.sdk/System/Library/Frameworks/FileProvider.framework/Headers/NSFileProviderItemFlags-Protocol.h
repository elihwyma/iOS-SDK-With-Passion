/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/Swift-Protocol.h>

@protocol NSFileProviderItemFlags <Swift>

@property (nonatomic, readonly, getter=isUserExecutable) _Bool userExecutable;
@property (nonatomic, readonly, getter=isUserReadable) _Bool userReadable;
@property (nonatomic, readonly, getter=isUserWritable) _Bool userWritable;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly, getter=isPathExtensionHidden) _Bool pathExtensionHidden;

@end
