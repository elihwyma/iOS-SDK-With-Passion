/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFSerializableContentProviderEntry : NSObject

{
    CDUnknownBlockType _serializationBlock;
    CDUnknownBlockType _deserializationBlock;
}

@property (nonatomic, readonly) CDUnknownBlockType serializationBlock;
@property (nonatomic, readonly) CDUnknownBlockType deserializationBlock;

- (id)initWithSerializedRepresentationBlock:(CDUnknownBlockType)arg1 deserializationBlock:(CDUnknownBlockType)arg2;

@end
