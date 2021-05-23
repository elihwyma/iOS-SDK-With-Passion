/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <MIME/Swift-Protocol.h>

@class NSString;

@protocol ECMimePart <Swift>

@property (copy, nonatomic, readonly) NSString *mimeSubtype;
@property (copy, nonatomic, readonly) NSString *mimeType;
@property (nonatomic, readonly) unsigned long long totalTextSize;

@end
