/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPMetadataProviderSpecializationContext, NSURL;

@protocol LPMetadataProviderSpecializationDelegate;

__attribute__((visibility("hidden")))
@interface LPMetadataProviderSpecialization : NSObject

{
    id <LPMetadataProviderSpecializationDelegate> _delegate;
    LPMetadataProviderSpecializationContext *_context;
}

@property (weak, nonatomic) id <LPMetadataProviderSpecializationDelegate> delegate;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) LPMetadataProviderSpecializationContext *context;

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;
+ (_Bool)generateSpecializedMetadataForCompleteMetadata:(id)arg1 withContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;
+ (id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2;

- (void)cancel;
- (void)start;
- (id)initWithContext:(id)arg1;

@end
