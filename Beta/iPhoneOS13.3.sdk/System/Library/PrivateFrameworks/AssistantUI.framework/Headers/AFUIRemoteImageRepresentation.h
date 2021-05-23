/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, UIImage;

@protocol OS_dispatch_queue;

@interface AFUIRemoteImageRepresentation : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_imageURL;
    UIImage *_image;
}

@property (copy, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;

- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_commonInit;
- (id)initWithImageURL:(id)arg1;

@end
