/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class PFCanceler, PHImportAsset;

@interface PHImportAssetDataRequest : NSObject

{
    PFCanceler *_canceler;
    unsigned char _type;
    unsigned char _priority;
    unsigned long long _longestSide;
    CDUnknownBlockType _cancelBlock;
    PHImportAsset *_asset;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType cancelBlock;
@property (retain, nonatomic) PHImportAsset *asset;
@property (nonatomic, readonly) PHImportAsset *requestAsset;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) unsigned long long longestSide;
@property (nonatomic, readonly) unsigned char priority;

+ (id)stringForRequestType:(unsigned char)arg1;

- (id)init;
- (void)cancel;
- (_Bool)isCanceled;
- (id)initWithAsset:(id)arg1 type:(unsigned char)arg2 longestSide:(unsigned long long)arg3 priority:(unsigned char)arg4;

@end
