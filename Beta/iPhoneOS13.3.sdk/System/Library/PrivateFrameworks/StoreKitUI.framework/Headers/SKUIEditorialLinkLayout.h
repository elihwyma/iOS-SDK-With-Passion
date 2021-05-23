/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIEditorialLinkLayout : NSObject

{
    struct CGSize *_sizes;
    struct CGSize _totalSize;
    NSArray *_links;
}

@property (nonatomic, readonly) NSArray *links;
@property (nonatomic, readonly) struct CGSize totalSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithLayoutRequest:(id)arg1;
- (struct CGSize)sizeForLinkAtIndex:(long long)arg1;

@end
