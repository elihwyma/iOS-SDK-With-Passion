/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <Foundation/NSObject.h>

@class DOCThumbnailRequest, NSString, UIImage;

@interface DOCIconPromise : NSObject

{
    UIImage *_icon;
    DOCThumbnailRequest *_request;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (nonatomic, readonly) _Bool isRepresentativeIcon;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (readonly) _Bool hasFinishedTryingToFetchCorrectThumbnail;

- (id)initWithRequest:(id)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)scheduleUpdateIfNeeded;
- (_Bool)registerGenerationCompletionHandler:(CDUnknownBlockType)arg1;

@end
