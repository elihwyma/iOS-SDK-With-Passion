/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <MIME/Swift-Protocol.h>

@class NSString;

@protocol ECMIMECharset <Swift>

@property (readonly) unsigned long long encoding;
@property (copy, nonatomic, readonly) NSString *charsetName;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) _Bool canBeUsedForOutgoingMessages;

@end
