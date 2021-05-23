/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSData, NSError, NSSecurityScopedURLWrapper, NSString;

@interface NSItemRepresentationLoadResult : NSObject <Swift>

{
    _Bool _wasOpenedInPlace;
    NSData *_data;
    NSSecurityScopedURLWrapper *_urlWrapper;
    CDUnknownBlockType _cleanupHandler;
    NSError *_error;
    NSString *_archivedObjectClassName;
}

@property (copy, nonatomic) NSData *data;
@property (retain, nonatomic) NSSecurityScopedURLWrapper *urlWrapper;
@property (copy, nonatomic) CDUnknownBlockType cleanupHandler;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *archivedObjectClassName;
@property (nonatomic) _Bool wasOpenedInPlace;

+ (id)resultWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
+ (id)resultWithError:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(CDUnknownBlockType)arg3 error:(id)arg4;

@end
