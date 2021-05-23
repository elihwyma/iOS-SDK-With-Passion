/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <Foundation/NSObject.h>

@class DOCItemThumbnail;

@interface DOCItemThumbnailBatchEntry : NSObject

{
    DOCItemThumbnail *_thumbnail;
    unsigned long long _fetchOptions;
}

@property (retain, nonatomic) DOCItemThumbnail *thumbnail;
@property (nonatomic) unsigned long long fetchOptions;

@end
