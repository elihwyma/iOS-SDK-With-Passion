/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCAssetHandle, NSString, NSURL;

@protocol FCHeadlineProviding, NUAdContextProvider;

@interface NUHeadlineVideoItem : NSObject

{
    id <NUAdContextProvider> _adContextProvider;
    id <FCHeadlineProviding> _headline;
}

@property (copy, nonatomic, readonly) id <FCHeadlineProviding> headline;
@property (copy, nonatomic, readonly) NSURL *videoURL;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) id <NUAdContextProvider> adContextProvider;
@property (copy, nonatomic, readonly) NSString *callToActionTitle;
@property (copy, nonatomic, readonly) NSURL *callToActionURL;
@property (nonatomic, readonly) FCAssetHandle *nameImageAssetHandle;
@property (copy, nonatomic, readonly) NSString *sourceName;
@property (copy, nonatomic, readonly) NSString *articleID;
@property (copy, nonatomic, readonly) NSString *sourceTagID;
@property (nonatomic, readonly, getter=isHiddenFromFeeds) _Bool hiddenFromFeeds;
@property (nonatomic, readonly, getter=isBoundToContext) _Bool boundToContext;
@property (nonatomic, readonly, getter=isPaid) _Bool paid;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeadline:(id)arg1;

@end
