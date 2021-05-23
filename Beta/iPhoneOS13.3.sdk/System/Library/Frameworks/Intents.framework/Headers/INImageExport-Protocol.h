/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSData, NSString, NSURL;

@protocol INImageExport <Swift>

@property (copy, nonatomic, readonly) NSString *_identifier;
@property (copy, nonatomic, setter=_setImageData:) NSData *_imageData;
@property (copy, nonatomic, setter=_setUri:) NSURL *_uri;
@property (copy, nonatomic, setter=_setName:) NSString *_name;
@property (copy, nonatomic, setter=_setBundlePath:) NSString *_bundlePath;

+ (unsigned short)imageNamed: /* Error: Ran out of types for this method. */;
+ (unsigned short)imageWithImageData: /* Error: Ran out of types for this method. */;
+ (unsigned short)imageWithURL: /* Error: Ran out of types for this method. */;

- (unsigned short)init;

@end
