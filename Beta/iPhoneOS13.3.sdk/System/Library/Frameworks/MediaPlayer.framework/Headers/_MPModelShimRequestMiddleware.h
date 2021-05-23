/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelResponse, NSArray, NSString;

@interface _MPModelShimRequestMiddleware : NSObject

{
    NSArray *_invalidationObservers;
    MPModelResponse *_modelResponse;
}

@property (retain, nonatomic) MPModelResponse *modelResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *invalidationObservers;

- (id)operationsForRequest:(id)arg1;

@end
