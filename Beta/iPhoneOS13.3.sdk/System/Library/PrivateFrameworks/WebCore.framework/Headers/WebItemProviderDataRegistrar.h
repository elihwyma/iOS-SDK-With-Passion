/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSData, NSString;

@protocol NSItemProviderWriting;

__attribute__((visibility("hidden")))
@interface WebItemProviderDataRegistrar : NSObject

{
    struct RetainPtr<NSString> _typeIdentifier;
    struct RetainPtr<NSData> _data;
}

@property (nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <NSItemProviderWriting> representingObjectForClient;
@property (nonatomic, readonly) NSString *typeIdentifierForClient;
@property (nonatomic, readonly) NSData *dataForClient;

- (id).cxx_construct;
- (void)registerItemProvider:(id)arg1;
- (id)initWithData:(id)arg1 type:(id)arg2;

@end
