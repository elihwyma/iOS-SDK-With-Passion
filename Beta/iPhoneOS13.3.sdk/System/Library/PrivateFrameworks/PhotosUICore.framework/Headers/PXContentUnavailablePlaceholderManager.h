/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PHFetchResult, PXGadgetDataSourceManager;

@protocol PXContentUnavailablePlaceholderManagerDelegate;

@interface PXContentUnavailablePlaceholderManager : NSObject <Swift>

{
    struct {
        _Bool didChange;
    } _delegateRespondsTo;
    _Bool _dataSourceEmpty;
    _Bool _libraryEmpty;
    id <PXContentUnavailablePlaceholderManagerDelegate> _delegate;
    NSString *_customTitle;
    NSString *_customMessage;
    PXGadgetDataSourceManager *_gadgetDataSourceManager;
    PHFetchResult *_singleAssetFetchResult;
}

@property (nonatomic, readonly) NSString *customTitle;
@property (nonatomic, readonly) NSString *customMessage;
@property (retain, nonatomic) PXGadgetDataSourceManager *gadgetDataSourceManager;
@property (retain, nonatomic) PHFetchResult *singleAssetFetchResult;
@property (nonatomic, getter=isDataSourceEmpty) _Bool dataSourceEmpty;
@property (nonatomic, getter=isLibraryEmpty) _Bool libraryEmpty;
@property (weak, nonatomic) id <PXContentUnavailablePlaceholderManagerDelegate> delegate;
@property (nonatomic, readonly) _Bool wantsPlaceholder;
@property (nonatomic, readonly) NSString *placeholderTitle;
@property (nonatomic, readonly) NSString *placeholderMessage;
@property (nonatomic, readonly) NSString *placeholderButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_invalidate;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithGadgetDataSourceManager:(id)arg1 customTitle:(id)arg2 customMessage:(id)arg3;
- (void)performPlaceholderButtonAction;
- (void)_gadgetDataSourceDidChange;

@end
