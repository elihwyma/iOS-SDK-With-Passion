/*
 Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PBItemRepresentationDataTransferDelegate;

@interface PBItemRepresentation : NSObject

{
    CDUnknownBlockType _loader;
    _Bool _isDataAvailableImmediately;
    NSString *_typeIdentifier;
    unsigned long long _preferredRepresentation;
    long long _visibility;
    id <PBItemRepresentationDataTransferDelegate> _dataTransferDelegate;
}

@property (nonatomic) unsigned long long preferredRepresentation;
@property (weak, nonatomic) id <PBItemRepresentationDataTransferDelegate> dataTransferDelegate;
@property (copy, nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic) long long visibility;
@property (nonatomic) _Bool isDataAvailableImmediately;

- (id)performProgressTrackingWithLoaderBlock:(CDUnknownBlockType)arg1 onCancelCallback:(CDUnknownBlockType)arg2;
- (id)initWithType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(CDUnknownBlockType)arg3;
- (id)copyWithDoNothingLoaderBlock;
- (void)setLoaderBlock:(CDUnknownBlockType)arg1;
- (id)loadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)loadFileCopyWithCompletion:(CDUnknownBlockType)arg1;
- (id)loadDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_loadCompletionBlock:(CDUnknownBlockType)arg1;
- (id)loadOpenInPlaceWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithNSItemRepresentation:(id)arg1;
- (id)v2_loadCompletionBlock:(CDUnknownBlockType)arg1;
- (void)v2_setLoader:(CDUnknownBlockType)arg1;
- (id)v2_loadOpenInPlaceWithCompletion:(CDUnknownBlockType)arg1;

@end
