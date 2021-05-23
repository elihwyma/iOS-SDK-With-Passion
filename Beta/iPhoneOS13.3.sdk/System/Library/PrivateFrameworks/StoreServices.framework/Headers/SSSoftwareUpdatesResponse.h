/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSError;

@interface SSSoftwareUpdatesResponse : NSObject

{
    NSError *_error;
    _Bool _failed;
    NSArray *_updateItems;
}

@property (readonly) NSError *error;
@property (readonly, getter=isFailed) _Bool failed;
@property (readonly) NSArray *updateItems;

- (void)dealloc;
- (id)description;
- (id)initWithError:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyUpdateItemDictionaries;
- (void)setUpdateItemsWithItemDictionaries:(id)arg1;

@end
