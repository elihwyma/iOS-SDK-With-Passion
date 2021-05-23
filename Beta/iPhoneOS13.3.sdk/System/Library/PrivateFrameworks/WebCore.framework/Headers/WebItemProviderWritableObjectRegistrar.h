/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSData, NSString;

@protocol NSItemProviderWriting;

__attribute__((visibility("hidden")))
@interface WebItemProviderWritableObjectRegistrar : NSObject

{
    struct RetainPtr<id<NSItemProviderWriting>> _representingObject;
}

@property (nonatomic, readonly) id <NSItemProviderWriting> representingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <NSItemProviderWriting> representingObjectForClient;
@property (nonatomic, readonly) NSString *typeIdentifierForClient;
@property (nonatomic, readonly) NSData *dataForClient;

- (id)initWithObject:(id)arg1;
- (id).cxx_construct;
- (void)registerItemProvider:(id)arg1;

@end
