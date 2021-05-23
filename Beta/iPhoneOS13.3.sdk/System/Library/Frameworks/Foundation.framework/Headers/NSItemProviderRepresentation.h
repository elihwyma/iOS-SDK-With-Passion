/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSItemProviderRepresentation : NSObject

{
    CDUnknownBlockType _loader;
    NSString *_typeIdentifier;
    long long _visibility;
    long long _preferredRepresentation;
}

@property (copy, nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic) long long visibility;
@property (nonatomic) long long preferredRepresentation;

- (void)dealloc;
- (id)initWithType_v2:(id)arg1 preferredRepresentation:(long long)arg2 loader:(CDUnknownBlockType)arg3;
- (id)loadDataWithOptions_v2:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadFileCopyWithOptions_v2:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadOpenInPlaceWithOptions_v2:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadWithOptions_v2:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)performProgressTrackingWithLoaderBlock:(CDUnknownBlockType)arg1 onCancelCallback:(CDUnknownBlockType)arg2;
- (id)_loadWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setLoaderBlock_v2:(CDUnknownBlockType)arg1;
- (id)initWithType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(CDUnknownBlockType)arg3;
- (id)copyWithDoNothingLoaderBlock;
- (id)loadWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLoaderBlock:(CDUnknownBlockType)arg1;
- (id)loadDataWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadFileCopyWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadOpenInPlaceWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
