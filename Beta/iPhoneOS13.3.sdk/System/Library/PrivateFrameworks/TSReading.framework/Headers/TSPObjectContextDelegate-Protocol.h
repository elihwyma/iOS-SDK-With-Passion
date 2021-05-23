/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol NSFilePresenter;

@protocol TSPObjectContextDelegate <Swift>

@property (nonatomic, readonly) id <NSFilePresenter> filePresenter;
@property (nonatomic, readonly) _Bool ignoreDocumentSupport;
@property (nonatomic, readonly) _Bool isDocumentSupportTemporary;
@property (nonatomic, readonly) _Bool areNewExternalReferencesToDataAllowed;

@end
