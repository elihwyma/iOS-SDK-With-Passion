/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface FigCaptureDeferredPhotoProcessorRequest : NSObject

{
    NSString *_applicationID;
    NSString *_captureRequestIdentifier;
    NSString *_photoIdentifier;
    FigCaptureDeferredPhotoProcessorRequest *_parent;
    NSObject<OS_xpc_object> *_message;
}

@property (nonatomic, readonly) NSString *applicationID;
@property (nonatomic, readonly) NSString *captureRequestIdentifier;
@property (nonatomic, readonly) NSString *photoIdentifier;
@property (nonatomic, readonly) FigCaptureDeferredPhotoProcessorRequest *parent;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithApplicationID:(id)arg1 captureRequstIdentifier:(id)arg2 photoIdentifier:(id)arg3 message:(id)arg4 parent:(id)arg5;

@end
