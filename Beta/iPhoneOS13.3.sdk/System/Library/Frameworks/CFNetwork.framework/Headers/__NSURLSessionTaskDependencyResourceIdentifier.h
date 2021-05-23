/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSString;

@interface __NSURLSessionTaskDependencyResourceIdentifier : NSObject <Swift>

{
    NSString *_URLPath;
    NSString *_mimeType;
}

@property (retain, nonatomic) NSString *URLPath;
@property (retain, nonatomic) NSString *mimeType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWitURLPath:(id)arg1 mimeType:(id)arg2;

@end
